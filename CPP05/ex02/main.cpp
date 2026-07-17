#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <cstdlib>
#include <ctime>

int main()
{
    std::srand(std::time(NULL));
    try
    {
        Bureaucrat boss("Alice", 1);
        Bureaucrat middle("Bob", 45);
        Bureaucrat low("Charlie", 150);
        ShrubberyCreationForm shrubbery("home");
        RobotomyRequestForm robotomy("Bender");
        PresidentialPardonForm pardon("Marvin");

        std::cout << shrubbery << std::endl;
        low.executeForm(shrubbery);
        boss.signForm(shrubbery);
        boss.executeForm(shrubbery);

        middle.signForm(robotomy);
        middle.executeForm(robotomy);

        boss.signForm(pardon);
        boss.executeForm(pardon);
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
