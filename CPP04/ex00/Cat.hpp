/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 10:18:33 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/02/16 13:59:21 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Cat : public Animal{
public:
    Cat();
    Cat(const Cat& other);
    Cat(const std::string& name);
    Cat& operator=(const Cat& other);
    void makeSound() const;
    ~Cat();
};