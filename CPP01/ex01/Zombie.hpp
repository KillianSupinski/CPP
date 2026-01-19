/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 16:36:41 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/01/17 17:04:48 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>

class Zombie{
private:
    std::string _name;
public:
    Zombie();
    ~Zombie();
    void announce() const;
    void setName(const std::string &name);
};

Zombie* zombieHorde(int N, std::string name);


#endif