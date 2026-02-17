/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 13:07:11 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/02/16 14:32:57 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat default destructor called" << std::endl;
}

WrongCat&  WrongCat::operator=(const WrongCat& other){
    if(this != &other)
        WrongAnimal::operator=(other);
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    return *this;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other){
        std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::WrongCat(const std::string& name) : WrongAnimal(name){
    std::cout << "WrongCat parameterized constructor called" << std::endl;
}
void WrongCat::makeSound() const {
    std::cout << "The WrongCat is meowing" << std::endl;
}