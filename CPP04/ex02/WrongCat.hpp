/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 13:07:05 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/02/16 14:23:28 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
    WrongCat();
    WrongCat(const WrongCat& other);
    WrongCat(const std::string& name);
    WrongCat& operator=(const WrongCat& other);
    void makeSound() const;
    ~WrongCat();
};