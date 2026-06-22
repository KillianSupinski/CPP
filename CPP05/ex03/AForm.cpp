#include "AForm.hpp"

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw std::out_of_range("Grade too low, Grade must be between 1 and 150");
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw std::out_of_range("Grade too high, Grade must be between 1 and 150");
}

AForm::~AForm()
{
}

const std::string& AForm::getName() const
{
    return name;
}

bool AForm::getIsSigned() const
{
    return isSigned;
}
int AForm::getGradeToSign() const
{
    return gradeToSign;
}
int AForm::getGradeToExecute() const
{
    return gradeToExecute;
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > gradeToSign)
        throw std::out_of_range( bureaucrat.getName() + " grade too low to sign this form");
    std::cout << bureaucrat.getName() << " signed " << name << std::endl;
    isSigned = true;
}

void AForm::execute(const Bureaucrat& executor) const
{
    if (!isSigned)
        throw std::runtime_error("Form is not signed, cannot execute");
    if (executor.getGrade() > gradeToExecute)
        throw std::out_of_range( executor.getName() + " grade too low to execute this form");
    std::cout << executor.getName() << " executed " << name << std::endl;
}