/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:22:35 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/17 16:22:39 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

// Computing area of a triangle
static float area(Point const &p1, Point const &p2, Point const &p3)
{
    float   area;

    area = ((p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat()))
            + p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat())
            + p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat())
            ) / 2;
    
    if (area >= 0)
        return area;
    else
        return (area * -1);
}

//BSP - Binary Space Partitioning
bool bsp( Point const a, Point const b, Point const c, Point const point) 
{
    float   areaABC, areaPAB, areaPAC, areaPBC;
    bool    areaValue = false;

    areaABC = area(a, b, c);
    //std::cout << "areaABC :" << areaABC << std::endl;
    areaPAB = area(point, a, b);
    //std::cout << "areaPAB :" << areaPAB << std::endl;
    areaPAC = area(point, a, c);
    //std::cout << "areaPAC :" << areaPAC << std::endl;
    areaPBC = area(point, b, c);
    //std::cout << "areaPBC :" << areaPBC << std::endl;

    if (areaPAB + areaPAC + areaPBC == areaABC)
        areaValue = true;

    else if (areaPAB + areaPAC + areaPBC != areaABC)
        areaValue = false;

    return areaValue;
}