/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 13:07:18 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/02/16 14:01:30 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal"){
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal default destructor called" << std::endl;
}

WrongAnimal&  WrongAnimal::operator=(const WrongAnimal& other){
    if(this != &other)
        _type = other._type;
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : _type(other._type){
        std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& name) : _type(name){
    std::cout << "WrongAnimal parameterized constructor called" << std::endl;
}

void WrongAnimal::makeSound() const{
    std::cout << "The WrongAnimal is doing a sound !" << std::endl;
}
std::string WrongAnimal::getType() const{
    return _type;
}
