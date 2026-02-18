/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 10:18:33 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/02/17 15:02:29 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
private:
    Brain* _brain;
public:
    Cat();
    Cat(const Cat& other);
    Cat(const std::string& name);
    Cat& operator=(const Cat& other);
    void makeSound() const;
    ~Cat();
    Brain* getBrain() const;
};