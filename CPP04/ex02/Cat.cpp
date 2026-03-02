/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 10:18:30 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/02/25 11:25:07 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat"){
    _brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat(){
    std::cout << "Cat default destructor called" << std::endl;
    delete _brain;
}

Cat&  Cat::operator=(const Cat& other){
    if(this != &other)
    {
        AAnimal::operator=(other);
        if(!_brain)
            _brain = new Brain();
        *_brain = *(other._brain);
    }
    std::cout << "Cat copy assignment operator called" << std::endl;
    return *this;
}

Cat::Cat(const Cat& other) : AAnimal(other) {
        _brain = new Brain(*(other._brain));
        std::cout << "Cat copy constructor called" << std::endl;
}

Cat::Cat(const std::string& name) : AAnimal(name){
    _brain = new Brain();
    std::cout << "Cat parameterized constructor called" << std::endl;
}
void Cat::makeSound() const {
    std::cout << "The cat is meowing" << std::endl;
}
Brain* Cat::getBrain() const{
    return _brain;
}