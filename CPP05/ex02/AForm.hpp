#ifndef AFORM_HPP
#define AFORM_HPP
#include "Bureaucrat.hpp"

class AForm{
    private:
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;
    public:
        AForm(const std::string& name, int gradeToSign, int gradeToExecute);
        virtual ~AForm();
        const std::string& getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        void beSigned(const Bureaucrat& bureaucrat);
        virtual void execute(const Bureaucrat& executor) const = 0;
};
#endif