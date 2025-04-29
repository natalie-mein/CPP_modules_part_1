/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:21:53 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/17 16:21:55 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default constructor
Fixed::Fixed(void) : _value(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed &other)
{
	//std::cout << "Copy constructor called" << std::endl;
	_value = other.getRawBits();
}

// Assignement operator overload
Fixed &Fixed::operator=(const Fixed &other)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_value = other.getRawBits();
	return *this;
}

// Destructor
Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
	return ;
}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

Fixed::Fixed(const int i) 
{
    //std::cout << "Int constructor called" << std::endl;
    _value = i << _fractionalBits;
}

Fixed::Fixed(const float j) 
{
    //std::cout << "Float constructor called" << std::endl;
    _value = roundf(j * (1 << _fractionalBits));
}

float	Fixed::toFloat() const 
{
	return (float)_value / (float)(1 <<_fractionalBits);
}

int		Fixed::toInt() const 
{
    return (int)(_value >> _fractionalBits);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed) 
{
	out << fixed.toFloat();
	return out;
}

// Addition
Fixed Fixed::operator+(const Fixed &other) const 
{
    return Fixed(this->toFloat() + other.toFloat());
}

// Subtraction
Fixed Fixed::operator-(const Fixed &other) const 
{
    return Fixed(this->toFloat() - other.toFloat());
}

// Multiplication
Fixed Fixed::operator*(const Fixed &other) const 
{
    return Fixed(this->toFloat() * other.toFloat());
}

// Division
Fixed Fixed::operator/(const Fixed &other) const 
{
    if (other._value == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        return Fixed(0);
    }
    return Fixed(this->toFloat() / other.toFloat());
}

// Comparisons
bool Fixed::operator>(const Fixed &other) const 
{
    return this->_value > other._value; 
}

bool Fixed::operator<(const Fixed &other) const 
{ 
    return this->_value < other._value; 
}

bool Fixed::operator>=(const Fixed &other) const 
{ 
    return this->_value >= other._value;
}

bool Fixed::operator<=(const Fixed &other) const
{ 
    return this->_value <= other._value;
}

bool Fixed::operator==(const Fixed &other) const 
{ 
    return this->_value == other._value;
}

bool Fixed::operator!=(const Fixed &other) const 
{ 
    return this->_value != other._value; 
}

// increment and decrement
Fixed&	Fixed::operator++() {
	_value++;
	return *this;
}

Fixed&  Fixed::operator--() {
    _value--;
    return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);
	operator++();
	return tmp;
}

Fixed   Fixed::operator--(int) {
    Fixed   tmp(*this);
    operator--();
    return (tmp);
}

//min and max
Fixed&  Fixed::min(Fixed& a, Fixed& b) {
    if (a < b)
        return a;
    else
        return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    if (a < b)
        return a;
    else
        return b;
}

 Fixed& Fixed::max(Fixed& a, Fixed& b) {
    if (a > b)
        return a;
    else
        return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    if (a > b)
        return a;
    else
        return b;
}
