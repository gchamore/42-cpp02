/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:42:27 by gchamore          #+#    #+#             */
/*   Updated: 2024/10/02 16:17:05 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

// int main(void)
// {
// 	Fixed a(5);
// 	Fixed const b(Fixed(25));
// 	Fixed result;
// 	std::cout << "---------- check < > <= >= + = - == * / ----------" << std::endl;
// 	if (a < b && b > a && a <= b && b >= a && a == (a + b) - b && a != b)
// 	{
// 		result = (b + b - b) * b / b;
// 		std::cout << "---------- result must be equal to a ----------" << std::endl;
// 		std::cout << "a = " << a << std::endl;
// 		std::cout << "b = " << b << std::endl;
// 		std::cout << "result = " << result << std::endl;
// 	}
// 	//<< std::setprecision(8) <<
// 	std::cout << "---------- check -- ++ ----------" << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << "---------- ++ pre incrementation ----------" << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << "---------- post incrementation ++ ----------" << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << "---------- -- pre decrementation ----------" << std::endl;
// 	std::cout << --a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << "---------- post decrementation -- ----------" << std::endl;
// 	std::cout << a-- << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << "---------- check max min ----------" << std::endl;
// 	std::cout << Fixed::max(a, b) << std::endl;
// 	std::cout << Fixed::min(a, b) << std::endl;
// 	return 0;
// }

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	return 0;
}