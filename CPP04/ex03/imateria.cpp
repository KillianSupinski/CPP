#include "imateria.hpp"

IMateriaSource::~IMateriaSource()
{
    std::cout << "IMateriaSource destructor called" << std::endl;
}


AMateria* IMateriaSource::createMateria(std::string const & type)
{
    std::cout << "IMateriaSource createMateria called with type: " << type << std::endl;
    if(type == "ice")
    {
        std::cout << "Creating Ice materia" << std::endl;
        return new Ice();
    }
    else if(type == "cure")
    {
        std::cout << "Creating Cure materia" << std::endl;
        return new Cure();
    }
    return nullptr;
}