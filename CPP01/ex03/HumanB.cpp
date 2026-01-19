/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 09:59:43 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/01/19 14:41:19 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : _name(name), _weapon(NULL) {}

HumanB::~HumanB(){}


void HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
}

void HumanB::attack() const
{
    if(_weapon)
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " attcks with their fist" << std::endl;
}