/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 09:59:41 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/01/19 12:01:23 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA{
private:
    std::string _name;
    Weapon& _weapon;
public:
    HumanA(const std::string& name, Weapon& Weapon);
    ~HumanA();
    void attack() const;
};