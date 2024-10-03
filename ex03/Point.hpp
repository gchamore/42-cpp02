/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 09:16:55 by gchamore          #+#    #+#             */
/*   Updated: 2024/10/03 14:10:17 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <iomanip>
#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point
{
public:
    Point();
	Point(const float float_x, const float float_y);
    Point(const Point& other);
    ~Point();

    Point& operator=(const Point& other);
	Fixed getX() const;
    Fixed getY() const;

private:
    Fixed _x;
	Fixed _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif