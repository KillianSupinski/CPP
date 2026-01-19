/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 16:36:44 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/01/17 18:09:51 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if(N < 1)
        return NULL;
    Zombie* z = new Zombie[N];

    for(int i = 0; i < N; i++)
    {
        z[i].setName(name);
    }
    return (z);
}