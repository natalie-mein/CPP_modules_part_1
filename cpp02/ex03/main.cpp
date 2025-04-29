/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:21:26 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/17 16:21:28 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
    Point const a(0.0f, 0.0f);
    Point const b(4.0f, 0.0f);
    Point const c(2.0f, 3.0f);
    Point const point(2.0f, 1.0f); //inside
    //Point const point(5.0f, 5.0f); //outside

    if (bsp(a, b, c, point) == true)
    std::cout << "This point is inside the triangle" << std::endl;

    else if (bsp(a, b, c, point) == false)
    std::cout << "This point is NOT inside the triangle" << std::endl;

    return 0;
}
