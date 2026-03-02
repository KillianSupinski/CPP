/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 10:18:28 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/02/25 11:20:05 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>
#include "Brain.hpp"

class AAnimal{
protected:
    std::string _type;
public:
    AAnimal();
    AAnimal(const AAnimal& other);
    AAnimal(const std::string& name);
    AAnimal& operator=(const AAnimal& other);
    virtual ~AAnimal();
    std::string getType() const;
    virtual void makeSound() const = 0;
};

#endif