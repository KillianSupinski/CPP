#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Form f1("Form1", 50, 25);
        Bureaucrat jean("Jean", 75);
        Bureaucrat alice("Alice", 1);

        std::cout << jean << std::endl;
        std::cout << f1 << std::endl;
        jean.signForm(f1);
        alice.signForm(f1);
        std::cout << f1 << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
