#include "character.hpp"

Character::Character(std::string const & name) : _name(name)
{
    std::cout << "Character constructor called" << std::endl;
}

Character::Character(Character const & src)
{
    if(this != &src)
    {
        _name = src._name;
        for(int i = 0; i < 4; i++)
        {
            if(src._inventory[i])
                _inventory[i] = src._inventory[i]->clone();
            else
                _inventory[i] = nullptr;
        }
    }
    std::cout << "Character copy constructor called" << std::endl;
}

Character::~Character()
{
    for(int i = 0; i < 4; i++)
    {
        if(_inventory[i])
            delete _inventory[i];
    }
    std::cout << "Character destructor called" << std::endl;
}

Character& Character::operator=(Character const & rhs)
{
    if(this != &rhs)
    {
        _name = rhs._name;
        for(int i = 0; i < 4; i++)
        {
            if(_inventory[i])
                delete _inventory[i];
            if(rhs._inventory[i])
                _inventory[i] = rhs._inventory[i]->clone();
            else
                _inventory[i] = nullptr;
        }
    }
    std::cout << "Character assignment operator called" << std::endl;
    return *this;
}

std::string const & Character::getName() const
{
    return _name;
}

void Character::equip(AMateria* m)
{
    for(int i = 0; i < 4; i++)
    {
        if(!_inventory[i])
        {
            _inventory[i] = m;
            std::cout << "Equipped " << m->getType() << " in slot " << i << std::endl;
            return;
        }
    }
    std::cout << "Inventory full, cannot equip " << m->getType() << std::endl;
}

void Character::unequip(int idx)
{
    if(idx >= 0 && idx < 4)
    {
        if(_inventory[idx])
        {
            std::cout << "Unequipped " << _inventory[idx]->getType() << " from slot " << idx << std::endl;
            _inventory[idx] = nullptr;
        }
        else
            std::cout << "Slot " << idx << " is already empty" << std::endl;
    }
    else
        std::cout << "Invalid slot index: " << idx << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
    if(idx >= 0 && idx < 4)
    {
        if(_inventory[idx])
        {
            std::cout << "Using " << _inventory[idx]->getType() << " from slot " << idx << " on " << target.getName() << std::endl;
            _inventory[idx]->use(target);
        }
        else
            std::cout << "Slot " << idx << " is empty, cannot use" << std::endl;
    }
    else
        std::cout << "Invalid slot index: " << idx << std::endl;
}