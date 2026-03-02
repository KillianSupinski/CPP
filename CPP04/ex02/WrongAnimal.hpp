/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 13:07:15 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/02/16 14:35:32 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <string>
#include <iostream>

class WrongAnimal{
protected:
    std::string _type;
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& other);
    WrongAnimal(const std::string& name);
    WrongAnimal& operator=(const WrongAnimal& other);
    ~WrongAnimal();
    std::string getType() const;
    void makeSound() const;
};

#endif