/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 16:28:17 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/01/17 18:12:29 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int n = -1;
    std::cout << "First test Horde" << std::endl;
    Zombie* z = zombieHorde(n, "hello");
    if(!z)
    {
        std::cout << "Invald number of zombie" << std::endl;
        return 1;
    }
    for(int i = 0; i < n; i++)
    {
        z[i].announce();
    }
    delete[] z;
    return (0);
}