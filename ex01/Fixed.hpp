/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:40:46 by gchamore          #+#    #+#             */
/*   Updated: 2024/10/03 14:53:59 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iomanip>
#include <iostream>
#include <cmath>

class Fixed
{
public:
    Fixed();
	Fixed(const int int_nb);
	Fixed(const float float_nb);
    Fixed(const Fixed& other);
    ~Fixed();

    Fixed& operator=(const Fixed& other);

    int getRawBits(void) const;
    void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;

private:
    int _value;
	static const int _fractionalBits;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif