/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 09:20:03 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/01/12 14:36:57 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/class_all.hpp"

Contact::Contact(){}
Contact::~Contact(){}

void Contact::setphonenumber(const std::string &phonenumber)
{
    _phonenumber = phonenumber;
}

void Contact::setfirstname(const std::string &firstname)
{
    _firstname = firstname;
}

void Contact::setlastname(const std::string &lastname)
{
    _lastname = lastname;
}

void Contact::setnickname(const std::string &nickname)
{
    _nickname = nickname;
}

void Contact::setdarkestsecret(const std::string &darkestsecret)
{
    _darkestsecret = darkestsecret;
}

std::string Contact::getphonenumber() const
{
    return (_phonenumber);
}

std::string Contact::getfirstname() const
{
    return (_firstname);
}

std::string Contact::getlastname() const
{
    return (_lastname);
}

std::string Contact::getnickname() const
{
    return (_nickname);
}

std::string Contact::getdarkestsecret()const
{
    return (_darkestsecret);
}