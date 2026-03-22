#include "AForm.hpp"

class RobotomyRequestForm : public AForm{
    private:
        std::string target;
    public:
        RobotomyRequestForm(const std::string& target);
        ~RobotomyRequestForm();
        void execute(const Bureaucrat& executor) const;
};