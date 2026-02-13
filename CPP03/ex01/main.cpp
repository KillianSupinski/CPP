/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 11:30:03 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/02/13 09:23:08 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ScavTrap scav("Scavvy");
    ClapTrap* p = new ScavTrap("Dynamic_ScavTrap");
    scav.attack("a target");
    scav.takeDamage(100);
    scav.beRepaired(10);
    scav.attack("another target");
    scav.guardGate();

    delete p;
    return 0;
}