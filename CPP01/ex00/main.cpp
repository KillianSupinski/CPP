/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 13:38:54 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/01/17 17:03:11 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::cout << "first test zombie" << std::endl;
    randomChump("CHUMP");
    std::cout << "second test zombie" << std::endl;
    Zombie* z = newZombie("zombie2");
    z->announce();
    delete(z);
}