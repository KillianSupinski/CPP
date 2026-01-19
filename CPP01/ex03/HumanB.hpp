/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 09:59:45 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/01/19 12:13:55 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB{
private:
    std::string _name;
    Weapon*     _weapon;
public:
    HumanB(const std::string& name);
    ~HumanB();
    void setWeapon(Weapon& weapon);
    void attack() const;
};