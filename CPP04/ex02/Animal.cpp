/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 10:18:26 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/02/16 13:55:56 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal"){
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal default destructor called" << std::endl;
}

Animal&  Animal::operator=(const Animal& other){
    if(this != &other)
        _type = other._type;
    std::cout << "Animal copy assignment operator called" << std::endl;
    return *this;
}

Animal::Animal(const Animal& other) : _type(other._type){
        std::cout << "Animal copy constructor called" << std::endl;
}

Animal::Animal(const std::string& name) : _type(name){
    std::cout << "Animal parameterized constructor called" << std::endl;
}

void Animal::makeSound() const{
    std::cout << "The animal is doing a sound !" << std::endl;
}
std::string Animal::getType() const{
    return _type;
}
