/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 10:18:34 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/02/17 15:02:57 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog"){
    _brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog(){
    std::cout << "Dog default destructor called" << std::endl;
    delete _brain;
}

Dog&  Dog::operator=(const Dog& other){
    if(this != &other)
    {
        if(!_brain)
            _brain = new Brain();
        *_brain = *(other._brain);
        Animal::operator=(other);
    }
    std::cout << "Dog copy assignment operator called" << std::endl;
    return *this;
}

Dog::Dog(const Dog& other) : Animal(other){
    _brain = new Brain(*(other._brain));
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::Dog(const std::string& name) : Animal(name){
    _brain = new Brain();
    std::cout << "Dog parameterized constructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "The dog is barking" << std::endl;
}

Brain* Dog::getBrain() const{
    return _brain;
}