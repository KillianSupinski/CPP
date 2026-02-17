/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 10:18:36 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/02/16 13:56:53 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : public Animal{
public:
    Dog();
    Dog(const Dog& other);
    Dog(const std::string& name);
    Dog& operator=(const Dog& other);
    void makeSound() const;
    ~Dog();
};