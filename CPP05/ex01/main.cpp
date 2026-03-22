
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try{
        Form f1("Form1", 50, 25);
        Bureaucrat b3("Jean", 75);
        Bureaucrat b1("Alice", 1);
        std::cout << f1.getName() << " requires grade " << f1.getGradeToSign() << " to sign and grade " << f1.getGradeToExecute() << " to execute." << std::endl;
        b3.incrementGrade();
        f1.beSigned(b3);
        std::cout << f1.getName() << " is signed: " << (f1.getIsSigned() ? "Yes" : "No") << std::endl;
        f1.beSigned(b1);
        std::cout << f1.getName() << " is signed: " << (f1.getIsSigned() ? "Yes" : "No") << std::endl;
        std::cout << b1.getName() << " has grade " << b1.getGrade() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    
    return 0;
}