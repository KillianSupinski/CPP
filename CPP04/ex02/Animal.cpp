/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 10:18:26 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/02/25 11:20:00 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal() : _type("Animal"){
    std::cout << "Animal default constructor called" << std::endl;
}

AAnimal::~AAnimal(){
    std::cout << "Animal default destructor called" << std::endl;
}

AAnimal&  AAnimal::operator=(const AAnimal& other){
    if(this != &other)
        _type = other._type;
    std::cout << "Animal copy assignment operator called" << std::endl;
    return *this;
}

AAnimal::AAnimal(const AAnimal& other) : _type(other._type){
        std::cout << "Animal copy constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string& name) : _type(name){
    std::cout << "Animal parameterized constructor called" << std::endl;
}

void AAnimal::makeSound() const{
    std::cout << "The animal is doing a sound !" << std::endl;
}
std::string AAnimal::getType() const{
    return _type;
}
