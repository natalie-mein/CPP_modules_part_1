/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:22:20 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/17 16:22:22 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(void) : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point &other) : _x(other.getX()), _y(other.getY()) {}

Point &Point::operator=(const Point &other) 
{
    if (this != &other)
    {
        Point temp(other);
        *this = temp;
        return *this;
    }
    return *this;
}

Point::~Point() {}

const Fixed &Point::getX(void) const
{
    return this->_x;
}

const Fixed &Point::getY(void) const
{
    return this->_y;
}
