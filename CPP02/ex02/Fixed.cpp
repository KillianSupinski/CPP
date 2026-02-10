/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 13:11:41 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/02/10 10:06:22 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed() : _raw(0)
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
bool Fixed::operator<(const Fixed& other) const{
    return _raw < other._raw;
}
bool Fixed::operator>(const Fixed& other) const{
    return _raw > other._raw;
}
bool Fixed::operator<=(const Fixed& other) const{
    return _raw <= other._raw;
}
bool Fixed::operator>=(const Fixed& other) const{
    return _raw >= other._raw;
}
bool Fixed::operator==(const Fixed& other) const{
    return _raw == other._raw;
}
bool Fixed::operator!=(const Fixed& other) const{
    return _raw != other._raw;
}
Fixed&  Fixed::operator++(){
    _raw++;
    return *this;
}
Fixed&  Fixed::operator--(){
    _raw--;
    return *this;
}
Fixed  Fixed::operator++(int){
    Fixed tmp(*this);
    _raw++;
    return tmp;
}
Fixed  Fixed::operator--(int){
    Fixed tmp(*this);
    _raw--;
    return tmp;
}
Fixed  Fixed::operator+(const Fixed& other) const{
    return Fixed(this->toFloat() + other.toFloat());
}
Fixed  Fixed::operator-(const Fixed& other) const{
    return Fixed(this->toFloat() - other.toFloat());
}
Fixed  Fixed::operator*(const Fixed& other) const{
    return Fixed(this->toFloat() * other.toFloat());
}
Fixed  Fixed::operator/(const Fixed& other) const{
    return Fixed(this->toFloat() / other.toFloat());
}
Fixed& Fixed::min(Fixed& a, Fixed& b){
    if(a < b)
        return a;
    return b;
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b){
    if(a < b)
        return a;
    return b;
}
Fixed& Fixed::max(Fixed& a, Fixed& b){
    if(a > b)
        return a;
    return b;
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b){
    if(a > b)
        return a;
    return b;
}