/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 09:59:46 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/01/19 14:40:26 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
int main()
{
    Weapon weapon("batte de baseball");
    
    HumanB humanB("Bob");
    humanB.attack();
    humanB.setWeapon(weapon);
    humanB.attack();
    
}