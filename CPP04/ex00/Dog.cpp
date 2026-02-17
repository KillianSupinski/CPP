/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 10:18:34 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/02/16 13:55:13 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog(){
    std::cout << "Dog default destructor called" << std::endl;
}

Dog&  Dog::operator=(const Dog& other){
    if(this != &other)
        Animal::operator=(other);
    std::cout << "Dog copy assignment operator called" << std::endl;
    return *this;
}

Dog::Dog(const Dog& other) : Animal(other){
        std::cout << "Dog copy constructor called" << std::endl;
}

Dog::Dog(const std::string& name) : Animal(name){
    std::cout << "Dog parameterized constructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "The dog is barking" << std::endl;
}