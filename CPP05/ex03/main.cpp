#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <ctime>

int main()
{
    try
    {
        Bureaucrat boss("Boss", 1);
        Intern intern;

        AForm* form = intern.makeForm("robotomy request", "Bender");
        AForm* form2 = intern.makeForm("shrubbery creation", "Garden");
        AForm* form3 = intern.makeForm("presidential pardon", "Marvin");

        if (form)
        {
            form->beSigned(boss);
            form->execute(boss);
            delete form;
        }
        if (form2)
        {
            form2->beSigned(boss);
            form2->execute(boss);
            delete form2;
        }
        if (form3)
        {
            form3->beSigned(boss);
            form3->execute(boss);
            delete form3;
        }
    }
    catch (std::exception& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}