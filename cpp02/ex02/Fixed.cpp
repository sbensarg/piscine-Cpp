/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 23:59:56 by chicky            #+#    #+#             */
/*   Updated: 2022/01/06 12:41:39 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _pointFixe(0)
{

}

Fixed::Fixed(int const n)
{
	this->_pointFixe = (n << this->_fract);
}

Fixed::Fixed(float const f)
{
	this->_pointFixe = roundf((f * (float)(1 << this->_fract)));
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
}

Fixed::~Fixed()
{

}

float Fixed::toFloat(void) const
{
	return ((float) this->_pointFixe / (float)(1 << this->_fract));
}

int  Fixed::toInt( void ) const
{
	return(this->_pointFixe >> this->_fract);
}

int Fixed::getRawBits(void) const
{
	return this->_pointFixe;
}

void Fixed::setRawBits(int const raw)
{
	this->_pointFixe = raw;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	if (this != &rhs)
		this->_pointFixe = rhs.getRawBits(); // utiliser la valeur de rhs pour mettre a jour _pointFixe de l'insance courante 
	return (*this);
}

bool Fixed::operator==(Fixed const & rhs)
{
	return (this->toFloat() == rhs.toFloat());
}

bool Fixed::operator!=(Fixed const & rhs)
{
	return (this->toFloat() != rhs.toFloat());
}

bool Fixed::operator>=(Fixed const & rhs)
{
	return (this->toFloat() >= rhs.toFloat());
}

bool Fixed::operator<=(Fixed const & rhs)
{
	return (this->toFloat() <= rhs.toFloat());
}

bool Fixed::operator<(Fixed const & rhs)
{
	return (this->toFloat() < rhs.toFloat());
}

bool Fixed::operator>(Fixed const & rhs)
{
	return (this->toFloat() > rhs.toFloat());
}

Fixed Fixed::operator+(Fixed const & rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

 // Overload ++ when used as prefix
Fixed & Fixed::operator ++ (void) 
{
   ++this->_pointFixe;
   return (*this);
}

// Overload ++ when used as postfix
Fixed Fixed::operator ++ (int) 
{
    Fixed tmp(*this); // create a copy of 'this'
    ++(this->_pointFixe); // use the prefix operator to perform the increment
    return tmp; // return the temporary
}
Fixed & Fixed::operator -- (void) 
{
   --this->_pointFixe;
   return (*this);
}

Fixed Fixed::operator -- (int) 
{
    Fixed tmp(*this);
    --(this->_pointFixe);
    return tmp;
}

Fixed  & Fixed::min(Fixed & nbr1, Fixed & nbr2)
{
	if (nbr1 < nbr2)
		return(nbr1);
	else
		return(nbr2);
}

Fixed const & Fixed::min(Fixed const & nbr1, Fixed const & nbr2)
{
	if (nbr1.toFloat() < nbr2.toFloat())
		return(nbr1);
	else
		return(nbr2);
}

Fixed & Fixed::max(Fixed & nbr1, Fixed & nbr2)
{
	if (nbr1 > nbr2)
		return(nbr1);
	else
		return(nbr2);
}

Fixed const & Fixed::max(Fixed const & nbr1, Fixed const & nbr2)
{
	if (nbr1.toFloat() > nbr2.toFloat())
		return(nbr1);
	else
		return(nbr2);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}
