/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:34:12 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/29 20:07:27 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(): _fixed(0)
{
	// std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(int const num)
{
	// std::cout << "Int Constructor called" << std::endl;
	this->setRawBits(num << this->_bits);
}

Fixed::Fixed(float const num)
{
	// std::cout << "Float Constructor called" << std::endl;
	this->setRawBits(roundf(num * (1 << this->_bits)));
}

Fixed::Fixed(const Fixed &object)
{
	// std::cout << "Copy Constructor called" << std::endl;
	*this = object;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	// std::cout << "Copy Assignment Operator called" << std::endl;
	if (this != &rhs)
		this->_fixed = rhs.getRawBits();
	return (*this);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "Set raw bits called" << std::endl;
	this->_fixed = raw;
}

int		Fixed::getRawBits() const
{
	// std::cout << "Get raw bits called" << std::endl;
	return (this->_fixed);
}

std::ostream & operator<<(std::ostream &out, Fixed const &rhs)
{
	out << rhs.toFloat();
	return (out);
}

float	Fixed::toFloat() const
{
	return (roundf(this->_fixed) / (1 << this->_bits));
}

int	Fixed::toInt() const
{
	return (this->_fixed >> this->_bits);
}

/*------------------------------------------------------*/
/*--------------- COMPARISION OPERATORS ----------------*/
/*------------------------------------------------------*/

bool	Fixed::operator>(const Fixed &rhs) const
{
	return (this->_fixed > rhs.getRawBits());
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	return (this->_fixed < rhs.getRawBits());
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	return (this->_fixed >= rhs.getRawBits());
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	return (this->_fixed <= rhs.getRawBits());
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	return (this->_fixed == rhs.getRawBits());
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	return (this->_fixed != rhs.getRawBits());
}

/*------------------------------------------------------*/
/*--------------- ARITHEMETIC OPERATORS ----------------*/
/*------------------------------------------------------*/

Fixed	Fixed::operator+(const Fixed &rhs) const
{
	return (this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(const Fixed &rhs) const
{
	return (this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(const Fixed &rhs) const
{
	return (this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(const Fixed &rhs) const
{
	return (this->toFloat() / rhs.toFloat());
}

/*--------------------------------------------------------------*/
/*--------------- INCREMENT/DECREMENT OPERATORS ----------------*/
/*--------------------------------------------------------------*/

Fixed & Fixed::operator++()
{
	this->_fixed = this->_fixed + 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	this->operator++();
	return (tmp);
}

Fixed & Fixed::operator--()
{
	this->_fixed = this->_fixed - 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	this->operator--();
	return (tmp);
}

/*--------------------------------------------------*/
/*--------------- MIN/MAX OPERATORS ----------------*/
/*--------------------------------------------------*/

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed & Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed & Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}
