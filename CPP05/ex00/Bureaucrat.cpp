#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
    if (grade < 1)
        throw std::out_of_range("Grade too low, Grade must be between 1 and 150");
    else if (grade > 150)
        throw std::out_of_range("Grade too high, Grade must be between 1 and 150");
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::incrementGrade()
{
    if (grade <= 1)
        throw std::out_of_range("Grade too low, Grade must be between 1 and 150");
    grade--;
}

void Bureaucrat::decrementGrade()
{
    if (grade >= 150)
        throw std::out_of_range("Grade too high, Grade must be between 1 and 150");
    grade++;
}