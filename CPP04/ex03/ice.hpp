#include "ice.hpp"

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    AMateria::use(target);
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}