#include "Bureaucrat.hpp"
#include "Intern.hpp"

#include <cstdlib>
#include <ctime>

int main()
{
    std::srand(std::time(NULL));
    try
    {
        Bureaucrat boss("Boss", 1);
        Intern intern;
        AForm* form;

        form = intern.makeForm("robotomy request", "Bender");
        if (form)
        {
            boss.signForm(*form);
            boss.executeForm(*form);
            delete form;
        }

        form = intern.makeForm("shrubbery creation", "Garden");
        if (form)
        {
            boss.signForm(*form);
            boss.executeForm(*form);
            delete form;
        }

        form = intern.makeForm("presidential pardon", "Marvin");
        if (form)
        {
            boss.signForm(*form);
            boss.executeForm(*form);
            delete form;
        }

        form = intern.makeForm("unknown form", "Nobody");
        if (form)
            delete form;
    }
    catch (const std::exception& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}
