#include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
    private:
        std::string target;
    public:
        ShrubberyCreationForm(const std::string& target);
        ~ShrubberyCreationForm();
        void execute(const Bureaucrat& executor) const;
};