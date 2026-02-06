/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:15:09 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/01/28 10:50:00 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy of constructor called" << std::endl;
    *this = other;
}
Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if(this != &other)
        this->_raw = other.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int num) : _raw(num)
{
    std::cout << "Int constructor called" << std::endl;
    _raw = num << _bits;
}
Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called" << std::endl;
    _raw = (int)roundf(f * (1 << _bits));
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _raw;
}

void Fixed::setRawBits(const int raw)
{
    this->_raw = raw;
}

float Fixed::toFloat(void) const {
    return (float)_raw / (float)(1 << _bits);
}

int Fixed::toInt(void) const {
    return _raw >> _bits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& f){
    os << f.toFloat();
    return os;
}

