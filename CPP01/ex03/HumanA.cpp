/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 09:59:39 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/01/19 12:02:35 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon &weapon) : _name(name), _weapon(weapon) {}

HumanA::~HumanA(){}

void HumanA::attack() const
{
    std::cout << _name << " is attacking with their " << _weapon.getType() << std::endl;
}