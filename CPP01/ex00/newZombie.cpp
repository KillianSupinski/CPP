/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:29:34 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/01/17 18:14:32 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(const std::string &name)
{
    Zombie* z = NULL;
    try {
        z = new Zombie(name);
    } catch (const std::bad_alloc& e){
        std::cerr << "Allocation failled" << std::endl;
        return NULL;
    }
    return (z);
}

