/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 10:18:30 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/02/16 14:32:50 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat(){
    std::cout << "Cat default destructor called" << std::endl;
}

Cat&  Cat::operator=(const Cat& other){
    if(this != &other)
        Animal::operator=(other);
    std::cout << "Cat copy assignment operator called" << std::endl;
    return *this;
}

Cat::Cat(const Cat& other) : Animal(other){
        std::cout << "Cat copy constructor called" << std::endl;
}

Cat::Cat(const std::string& name) : Animal(name){
    std::cout << "Cat parameterized constructor called" << std::endl;
}
void Cat::makeSound() const {
    std::cout << "The cat is meowing" << std::endl;
}