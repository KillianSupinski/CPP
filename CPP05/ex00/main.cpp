
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b1("John", 1);
        std::cout << b1.getName() << " has grade " << b1.getGrade() << std::endl;
        b1.incrementGrade();
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat b2("Jane", 150);
        std::cout << b2.getName() << " has grade " << b2.getGrade() << std::endl;
        b2.decrementGrade();
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try{
        Bureaucrat b3("valid", 75);
        std::cout << b3.getName() << " has grade " << b3.getGrade() << std::endl;
        b3.incrementGrade();
        std::cout << b3.getName() << " has grade " << b3.getGrade() << std::endl;
        b3.decrementGrade();
        std::cout << b3.getName() << " has grade " << b3.getGrade() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}