/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:40:48 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/30 16:14:45 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const const int int_nb) : _value(0)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(int_nb << _fractionalBits);
}

Fixed::Fixed(const float float_nb)
{
    std::cout << "Float constructor called" << std::endl;
	_value = roundf(float_nb * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& other) : _value(other._value)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator<<(const Fixed& other)
{
    if (this != &other)
    {
        _value = other._value;
    }
    std::cout << "Assignment operator called" << std::endl;
    return *this;
}

float Fixed::toFloat( void ) const
{
	return (float)_value / (1 << _fractionalBits);
}

int Fixed::toInt( void ) const
{
	return _value >> _fractionalBits;

}

int Fixed::getRawBits(void) const
{
    return _value;
}

void Fixed::setRawBits(int const raw)
{
    _value = raw;
}