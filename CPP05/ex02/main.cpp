#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <ctime>

int main()
{
    std::srand(std::time(NULL));
    try{
        Bureaucrat b1("Alice", 2);
        Bureaucrat b2("Bob", 41);
        AForm* f1 = new ShrubberyCreationForm("home");
        AForm* f2 = new RobotomyRequestForm("Bender");
        AForm* f3 = new PresidentialPardonForm("Marvin");
        
        std::cout << f1->getName() << " requires grade " << f1->getGradeToSign() << " to sign and grade " << f1->getGradeToExecute() << " to execute." << std::endl;
        std::cout << f2->getName() << " requires grade " << f2->getGradeToSign() << " to sign and grade " << f2->getGradeToExecute() << " to execute." << std::endl;
        std::cout << f3->getName() << " requires grade " << f3->getGradeToSign() << " to sign and grade " << f3->getGradeToExecute() << " to execute." << std::endl;

        b1.incrementGrade();
        f1->beSigned(b1);
        f1->execute(b1);

        b2.decrementGrade();
        f2->beSigned(b2);
        f2->execute(b2);

        f3->beSigned(b1);
        f3->execute(b1);

        delete f1;
        delete f2;
        delete f3;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    
    return 0;
}