#include "materia.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
    if(this != &src)
    {
        _type = src._type;
        _xp = src._xp;
    }
    std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
    return _type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria used on " << target.getName() << std::endl;
    _xp += 10;
}

AMateria& AMateria::operator=(AMateria const & rhs)
{
    if(this != &rhs)
    {
        _type = rhs._type;
        _xp = rhs._xp;
    }
    std::cout << "AMateria assignment operator called" << std::endl;
    return *this;
}

unsigned int AMateria::getXP() const
{
    return _xp;
}