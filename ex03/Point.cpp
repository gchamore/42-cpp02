/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:05:32 by gchamore          #+#    #+#             */
/*   Updated: 2024/10/03 14:24:12 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float float_x, const float float_y) : _x(float_x), _y(float_y)
{
	// std::cout << "Parameterized constructor called" << std::endl;
}

Point::Point(const Point& other) : _x(other._x), _y(other._y)
{
    // std::cout << "Copy constructor called" << std::endl;
}

Point::~Point()
{
    // std::cout << "Destructor called" << std::endl;
}

Point &Point::operator=(const Point &other)
{
    if (this != &other)
	{}
    return *this;
}

Fixed Point::getX() const
{
    return _x;
}

Fixed Point::getY() const
{
    return _y;
}
