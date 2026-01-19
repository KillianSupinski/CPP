/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:29:49 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/01/17 18:15:27 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include <new>

class Zombie{
private:
    std::string _name;
public:
    Zombie(const std::string &name);
    ~Zombie();
    void announce() const;
};

Zombie* newZombie(const std::string &name);
void randomChump(const std::string &name);

#endif