/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:40:48 by gchamore          #+#    #+#             */
/*   Updated: 2024/10/02 13:47:01 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _value(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int int_nb)
{
	// std::cout << "Int constructor called" << std::endl;
	_value = int_nb * (1 << _fractionalBits);

}

Fixed::Fixed(const float float_nb)
{
    // std::cout << "Float constructor called" << std::endl;
	_value = roundf(float_nb * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& other) : _value(other._value)
{
    // std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    if (this != &other)
    {
        _value = other._value;
    }
    // std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

Fixed Fixed::operator+(const Fixed& other) const
{
	Fixed result;
    result._value = _value + other._value;
    return result;
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed result;
    result._value = _value - other._value;
    return result;
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed result;
    result._value = (_value * other._value) >> _fractionalBits;
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const
{
    if (other._value == 0)
	{
        std::cerr << "Error: Division by zero!" << std::endl;
        return Fixed();
    }
    Fixed result;
    result._value = (_value << _fractionalBits) / other._value;
    return result;
}

bool Fixed::operator==(const Fixed& other) const
{
	return _value == other._value;
}

bool Fixed::operator!=(const Fixed& other) const
{
	return _value != other._value;
}

bool Fixed::operator<(const Fixed& other) const
{
	return _value < other._value;
}

bool Fixed::operator>(const Fixed& other) const
{
	return _value > other._value;
}

bool Fixed::operator<=(const Fixed& other) const
{
	return _value <= other._value;
}

bool Fixed::operator>=(const Fixed& other) const
{
	return _value >= other._value;
}

Fixed& Fixed::operator++() 
{
    ++_value;
    return *this;
}

Fixed Fixed::operator++(int) 
{
    Fixed temp = *this;
    ++_value;
    return temp;
}

Fixed& Fixed::operator--() 
{
    --_value;
    return *this;
}

Fixed Fixed::operator--(int) 
{
    Fixed temp = *this;
    --_value;
    return temp;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}

float Fixed::toFloat( void ) const
{
	return (float)_value / (1 << _fractionalBits);
}

int Fixed::toInt( void ) const
{
	return _value >> _fractionalBits;
	//same que : return (int)_value / (1 << _fractionalBits);
}

int Fixed::getRawBits(void) const
{
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
