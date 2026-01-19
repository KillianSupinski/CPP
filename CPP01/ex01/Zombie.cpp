/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 16:36:48 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/01/17 17:50:37 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

void Zombie::announce() const
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string &name)
{
    _name = name;
}
Zombie::~Zombie()
{
    std::cout << "Zombie : " << _name << " is dead." << std::endl; 
}
