#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
    private:
        std::string target;
    public:
        PresidentialPardonForm(const std::string& target);
        ~PresidentialPardonForm();
        void execute(const Bureaucrat& executor) const;
};