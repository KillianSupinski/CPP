#include "cure.hpp"

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    AMateria::use(target);
}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

