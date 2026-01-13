/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_all.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 15:23:48 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/01/13 11:17:09 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_ALL_HPP
#define CLASS_ALL_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>

class Contact{
private:
    std::string _phonenumber;
    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _darkestsecret;
public:
    Contact();
    ~Contact();
    void    setphonenumber(const std::string &phonenumber);
    void    setfirstname(const std::string &firstname);
    void    setlastname(const std::string &lastname);
    void    setnickname(const std::string &nickname);
    void    setdarkestsecret(const std::string &darkestsecret);
    
    std::string getphonenumber() const;
    std::string getfirstname() const;
    std::string getlastname() const;
    std::string getnickname() const;
    std::string getdarkestsecret() const;
};

class Phonebook{
    
private:
    Contact _contacts[8];
    int     _index;
public:
    Phonebook();
    ~Phonebook();
    void addcontact();
    void displaycontact() const;
    void displayonecontact(int index) const;
    int getindex() const;
};

#endif