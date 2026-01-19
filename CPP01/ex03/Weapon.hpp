/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 09:59:50 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/01/19 14:40:15 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>
#include <iostream>


class Weapon {
private:
    std::string _type;
public:
    Weapon(const std::string& type);
    ~Weapon();
    const std::string& getType() const;
    void setType(std::string type);
};
#endif