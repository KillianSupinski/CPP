/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 11:30:03 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/02/17 15:46:18 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
const int N = 10;
const Animal* animals[N];
for (int i = 0; i < N; i++)
{
    if (i % 2 == 0)
        animals[i] = new Dog();
    else
        animals[i] = new Cat();
}
for (int i = 0; i < N; i++)
{
    animals[i]->makeSound();
    delete animals[i];
}
    std::cout << "\n--- Deep copy tests ---\n";

    Dog d1;
    d1.getBrain()->setIdea(0, "pizza");

    Dog d2(d1); // copy constructor
    std::cout << "d1 idea0: " << d1.getBrain()->getIdea(0) << "\n";
    std::cout << "d2 idea0: " << d2.getBrain()->getIdea(0) << "\n";

    d1.getBrain()->setIdea(0, "salad");
    std::cout << "after change d1...\n";
    std::cout << "d1 idea0: " << d1.getBrain()->getIdea(0) << "\n";
    std::cout << "d2 idea0: " << d2.getBrain()->getIdea(0) << "\n";

    Dog d3;
    d3 = d1; // assignment operator
    std::cout << "d3 idea0 after assign: " << d3.getBrain()->getIdea(0) << "\n";

    d1.getBrain()->setIdea(0, "burger");
    std::cout << "after change d1 again...\n";
    std::cout << "d1 idea0: " << d1.getBrain()->getIdea(0) << "\n";
    std::cout << "d3 idea0: " << d3.getBrain()->getIdea(0) << "\n";

    // Bonus: vérifier que les Brain ne sont pas les mêmes pointeurs
    std::cout << "brain addresses:\n";
    std::cout << "d1 brain: " << d1.getBrain() << "\n";
    std::cout << "d2 brain: " << d2.getBrain() << "\n";
    std::cout << "d3 brain: " << d3.getBrain() << "\n";
return 0;
}