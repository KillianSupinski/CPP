/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 14:26:47 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/01/13 15:07:29 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/class_all.hpp"

void search(Phonebook &book)
{
    std::string input;
    int number;
    int count;
    
    count = book.getindex();
    book.displaycontact();
    if(!book.getindex())
        return ;
    while(1)
    {
        std::cout << "Enter the user index you want to display" << std::endl;
        if(!std::getline(std::cin, input))
        {
            std::cout << "EOF detected, end of program" << std::endl;
            exit (0);
        }
        std::istringstream iss(input);
        if(!(iss >> number))
        {
            std::cout << "Invalid: please enter a number" << std::endl;
            continue ;
        }
        if(!iss.eof())
        {
            std::cout << "Invalid: please enter only a number" << std::endl;
            continue ;
        }

        if (number <= 0 || number > count)
        {
            std::cout << "Invalid: please choose an existing index (1 to "<< (count) << ")" << std::endl;
            continue ;
        }
        book.displayonecontact(number);
        break ;
    }
}


int main() {
    Phonebook book;
    std::string input;

    while(1)
    {
        std::cout << "Choose an option {ADD, SEARCH, EXIT}" << std::endl;
        if(!std::getline(std::cin, input))
        {
            std::cout << "EOF detected, end of program" << std::endl;
            return (0);
        }
        else if (input == "EXIT")
            break ;
        else if (input == "ADD")
            book.addcontact();
        else if (input == "SEARCH")
            search(book);
    }    
}