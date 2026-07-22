#include "ScalarConverter.hpp"

#include <cctype>
#include <cerrno>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>

namespace
{
enum LiteralType
{
	INVALID_LITERAL,
	CHAR_LITERAL,
	INT_LITERAL,
	FLOAT_LITERAL,
	DOUBLE_LITERAL
};

bool	isSign(char c)
{
	return (c == '+' || c == '-');
}

bool	isPseudoFloat(const std::string& literal)
{
	// These are the float pseudo-literals required by the subject.
	return (literal == "-inff" || literal == "+inff" || literal == "nanf");
}

bool	isPseudoDouble(const std::string& literal)
{
	// Same values without the final 'f' are double pseudo-literals.
	return (literal == "-inf" || literal == "+inf" || literal == "nan");
}

bool	isQuotedChar(const std::string& literal)
{
	return (literal.length() == 3 && literal[0] == '\''
		&& literal[2] == '\'');
}

bool	isSingleChar(const std::string& literal)
{
	return (literal.length() == 1
		&& !std::isdigit(static_cast<unsigned char>(literal[0])));
}

bool	isIntLiteral(const std::string& literal)
{
	std::string::size_type	i;

	i = 0;
	if (literal.empty())
		return (false);
	if (isSign(literal[i]))
		i++;
	if (i == literal.length())
		return (false);
	while (i < literal.length())
	{
		if (!std::isdigit(static_cast<unsigned char>(literal[i])))
			return (false);
		i++;
	}
	return (true);
}

bool	isDecimalNumber(const std::string& literal,
					std::string::size_type begin,
					std::string::size_type end)
{
	bool				hasDigit;
	bool				hasDot;
	std::string::size_type	i;

	hasDigit = false;
	hasDot = false;
	i = begin;
	// The exercise says decimal notation only, so no exponent is accepted.
	if (i < end && isSign(literal[i]))
		i++;
	while (i < end)
	{
		if (std::isdigit(static_cast<unsigned char>(literal[i])))
			hasDigit = true;
		else if (literal[i] == '.' && !hasDot)
			hasDot = true;
		else
			return (false);
		i++;
	}
	return (hasDigit && hasDot);
}

bool	isFloatLiteral(const std::string& literal)
{
	if (isPseudoFloat(literal))
		return (true);
	if (literal.length() < 2 || literal[literal.length() - 1] != 'f')
		return (false);
	return (isDecimalNumber(literal, 0, literal.length() - 1));
}

bool	isDoubleLiteral(const std::string& literal)
{
	if (isPseudoDouble(literal))
		return (true);
	return (isDecimalNumber(literal, 0, literal.length()));
}

LiteralType	detectLiteralType(const std::string& literal)
{
	// Test from the most specific forms to the more general numeric forms.
	if (isQuotedChar(literal) || isSingleChar(literal))
		return (CHAR_LITERAL);
	if (isIntLiteral(literal))
		return (INT_LITERAL);
	if (isFloatLiteral(literal))
		return (FLOAT_LITERAL);
	if (isDoubleLiteral(literal))
		return (DOUBLE_LITERAL);
	return (INVALID_LITERAL);
}

double	literalToDouble(const std::string& literal, LiteralType type, bool& valid)
{
	double	value;
	float	floatValue;

	if (type == CHAR_LITERAL)
	{
		if (isQuotedChar(literal))
			return (static_cast<double>(literal[1]));
		return (static_cast<double>(literal[0]));
	}
	errno = 0;
	value = std::strtod(literal.c_str(), NULL);
	if (errno == ERANGE)
	{
		valid = false;
		return (0);
	}
	if (type == INT_LITERAL && value >= INT_MIN && value <= INT_MAX)
		return (static_cast<double>(static_cast<int>(value)));
	if (type == FLOAT_LITERAL)
	{
		if (!isPseudoFloat(literal)
			&& (value < -std::numeric_limits<float>::max()
				|| value > std::numeric_limits<float>::max()))
		{
			valid = false;
			return (0);
		}
		floatValue = static_cast<float>(value);
		return (static_cast<double>(floatValue));
	}
	return (value);
}

bool	isSpecial(double value)
{
	double	infinity;

	infinity = std::numeric_limits<double>::infinity();
	return (value != value || value == infinity || value == -infinity);
}

bool	isWhole(double value)
{
	double	integerPart;

	return (!isSpecial(value) && std::modf(value, &integerPart) == 0.0);
}

std::string	formatDouble(double value)
{
	std::ostringstream	output;

	if (isWhole(value))
		output << std::fixed << std::setprecision(1);
	output << value;
	return (output.str());
}

std::string	formatFloat(float value)
{
	std::ostringstream	output;

	// Float output follows the same rule, then printFloat() adds the 'f'.
	if (isWhole(static_cast<double>(value)))
		output << std::fixed << std::setprecision(1);
	output << value;
	return (output.str());
}

void	printChar(double value, bool valid)
{
	char	c;

	std::cout << "char: ";
	// NaN, infinities, and values outside ASCII cannot become a valid char.
	if (!valid || isSpecial(value) || value < 0 || value > 127)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	c = static_cast<char>(value);
	// Some valid char values exist but are not printable on screen.
	if (!std::isprint(static_cast<unsigned char>(c)))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << c << "'" << std::endl;
}

void	printInt(double value, bool valid)
{
	std::cout << "int: ";
	// Check the range before casting, otherwise overflow would be undefined.
	if (!valid || isSpecial(value) || value < INT_MIN || value > INT_MAX)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(value) << std::endl;
}

void	printFloat(double value, bool valid)
{
	float	floatValue;

	std::cout << "float: ";
	// Regular numbers must fit in a float; nan and infinities are allowed.
	if (!valid || (!isSpecial(value)
			&& (value < -std::numeric_limits<float>::max()
				|| value > std::numeric_limits<float>::max())))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	floatValue = static_cast<float>(value);
	std::cout << formatFloat(floatValue) << "f" << std::endl;
}

void	printDouble(double value, bool valid)
{
	std::cout << "double: ";
	if (!valid)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << formatDouble(value) << std::endl;
}
}

void	ScalarConverter::convert(std::string literal)
{
	LiteralType	type;
	double		value;
	bool		valid;

	type = detectLiteralType(literal);
	valid = (type != INVALID_LITERAL);
	// Convert once, then each print function handles its own limits.
	if (valid)
		value = literalToDouble(literal, type, valid);
	else
		value = 0;
	printChar(value, valid);
	printInt(value, valid);
	printFloat(value, valid);
	printDouble(value, valid);
}

ScalarConverter::~ScalarConverter() {}
