/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 09:20:11 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/02/17 15:07:37 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain(){
    std::cout << "Brain default destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other){
    if(this != &other)
    {
        for(int i = 0; i < 100; i++)
            _ideas[i] = other._ideas[i];
    }
    std::cout << "Brain copy assignment operator called" << std::endl;
    return *this;
}

Brain::Brain(const Brain& other){
    for(int i = 0; i < 100; i++)
        _ideas[i] = other._ideas[i];
    std::cout << "Brain copy constructor called" << std::endl;
}

std::string Brain::getIdea(int index) const{
    if(index < 0 || index >= 100)
        return "Invalid index";
    return _ideas[index];
}
void Brain::setIdea(int index, const std::string& idea){
    if(index < 0 || index >= 100)
        return;
    _ideas[index] = idea;
}