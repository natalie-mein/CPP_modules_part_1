/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 11:48:53 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/17 11:49:05 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default constructor
Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	_value = other.getRawBits();
}

// Assignement operator overload
Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_value = other.getRawBits();
	return *this;
}

// Destructor
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int Fixed::getRawBits(void) const
{
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

Fixed::Fixed(const int i) 
{
    std::cout << "Int constructor called" << std::endl;
    _value = i << _fractionalBits;
}

Fixed::Fixed(const float j) 
{
    std::cout << "Float constructor called" << std::endl;
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
