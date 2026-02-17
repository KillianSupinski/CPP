/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 11:30:03 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/02/17 09:17:24 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound();
j->makeSound();
meta->makeSound();

const WrongAnimal* wr = new WrongAnimal();
const WrongAnimal* wrcat = new WrongCat();
std::cout << wr->getType() << " " << std::endl;
std::cout << wrcat->getType() << " " << std::endl;
wr->makeSound();
wrcat->makeSound();

const WrongAnimal* w = new WrongCat();
w->makeSound(); // doit afficher le son WrongAnimal
delete w;

delete meta;
delete j;
delete i;
delete wr;
delete wrcat;
return 0;
}