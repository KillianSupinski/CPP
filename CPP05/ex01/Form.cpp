#include "Form.hpp"

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw std::out_of_range("Grade too low, Grade must be between 1 and 150");
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw std::out_of_range("Grade too high, Grade must be between 1 and 150");
}

Form::~Form()
{
}

const std::string& Form::getName() const
{
    return name;
}

bool Form::getIsSigned() const
{
    return isSigned;
}

int Form::getGradeToSign() const
{
    return gradeToSign;
}

int Form::getGradeToExecute() const
{
    return gradeToExecute;
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > gradeToSign)
        throw std::out_of_range( bureaucrat.getName() + " grade too low to sign this form");
    std::cout << bureaucrat.getName() << " signed " << name << std::endl;
    isSigned = true;
}

