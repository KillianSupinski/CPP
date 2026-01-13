/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 10:05:18 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/01/13 11:25:41 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/class_all.hpp"

Phonebook::Phonebook() : _index(0){}
Phonebook::~Phonebook(){}

std::string troncstr(const std::string &s)
{
    if(s.length() <= 10)
        return (s);
    return s.substr(0,9) + ".";
}

void Phonebook::displaycontact() const
{
    if(!_index){
        std::cout << "You have to add atleast 1 contact before search them." << std::endl;
        return ;
    }
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|  index   |first name|last name | nickname |" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
    for(int i = 0; i < 8; i++)
    {
        if(i >= _index)
            break ;
        std::cout   << "|" << std::setw(10) << i + 1;
        std::cout   << "|" << std::setw(10) << troncstr(_contacts[i].getfirstname()) 
                    << "|" << std::setw(10) << troncstr(_contacts[i].getlastname())
                    << "|" << std::setw(10) << troncstr(_contacts[i].getnickname()) << "|\n";
    std::cout << "|-------------------------------------------|" << std::endl;
    }
}

void Phonebook::displayonecontact(int index) const
{
    std::cout << _contacts[index - 1].getfirstname() << std::endl;
    std::cout << _contacts[index - 1].getlastname() << std::endl;
    std::cout << _contacts[index - 1].getnickname() << std::endl;
    std::cout << _contacts[index - 1].getphonenumber() << std::endl;
    std::cout << _contacts[index - 1].getdarkestsecret() << std::endl;
}

void Phonebook::addcontact()
{
    Contact new_contact;
    std::string string;

    while(1)
    {
        std::cout << "Enter first name" << std::endl;
        if(!std::getline(std::cin, string))
        {
            std::cout << "EOF detected, end of program" << std::endl;
            exit (0);
        }
        new_contact.setfirstname(string);
        if(string != "")
            break ;
    }
    while(1)
    {
        std::cout << "Enter last name" << std::endl;
        if(!std::getline(std::cin, string))
        {
            std::cout << "EOF detected, end of program" << std::endl;
            exit (0);
        }
        new_contact.setlastname(string);
        if(string != "")
            break ;
    }
    while(1)
    {
        std::cout << "Enter nickname" << std::endl;
        if(!std::getline(std::cin, string))
        {
            std::cout << "EOF detected, end of program" << std::endl;
            exit (0);
        }
        new_contact.setnickname(string);
        if(string != "")
            break ;
    }
    while(1)
    {
        std::cout << "Enter phone number" << std::endl;
        if(!std::getline(std::cin, string))
        {
            std::cout << "EOF detected, end of program" << std::endl;
            exit (0);
        }
        new_contact.setphonenumber(string);
        if(string != "")
            break ;
    }
    while(1)
    {
        std::cout << "Enter darkest secret" << std::endl;
        if(!std::getline(std::cin, string))
        {
            std::cout << "EOF detected, end of program" << std::endl;
            exit (0);
        }
        new_contact.setdarkestsecret(string);
        if(!string.empty() && string != "")
            break ;
    }
    _contacts[_index % 8] = new_contact;
    _index++;
}

int    Phonebook::getindex() const
{
    return _index;
}