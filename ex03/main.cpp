/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:42:27 by gchamore          #+#    #+#             */
/*   Updated: 2024/10/03 14:25:01 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
    Point a(0, 0);
    Point b(10, 0);
    Point c(5, 10);

    Point point1(5, 5);    // Un point à l'intérieur du triangle
    Point point2(15, 5);   // Un point à l'extérieur du triangle

    if (bsp(a, b, c, point1))
	{
        std::cout << "Point 1 est à l'intérieur du triangle." << std::endl;
    }
	else
	{
        std::cout << "Point 1 est à l'extérieur du triangle." << std::endl;
    }

    if (bsp(a, b, c, point2))
	{
        std::cout << "Point 2 est à l'intérieur du triangle." << std::endl;
    }
	else
	{
        std::cout << "Point 2 est à l'extérieur du triangle." << std::endl;
    }

    return 0;
}