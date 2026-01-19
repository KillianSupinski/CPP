/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 09:59:48 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/01/19 11:11:05 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : _type(type){}
Weapon::~Weapon(){}

const std::string& Weapon::getType() const
{
    return _type;
}

void Weapon::setType(std::string type)
{
    _type = type;
}