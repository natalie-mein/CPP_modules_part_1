/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:22:09 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/17 16:22:11 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include <iostream>
#include <string>

class Point {
    private:
        const Fixed _x;
        const Fixed _y;

    public:
        Point(void);
        Point(const float x, const float y);
		Point(const Point& other);
		Point &operator=(const Point &other);
		~Point();

        const Fixed &getX(void) const;
        const Fixed &getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif