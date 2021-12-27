/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 23:59:56 by chicky            #+#    #+#             */
/*   Updated: 2021/12/27 15:51:49 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _pointFixe(0)
{
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n)
{
	this->_pointFixe = (n << this->_fract);
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const f)
{
	this->_pointFixe = roundf((f * (float)(1 << this->_fract)));
//	std::cout << "Float constructor called " << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
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
	//std::cout << "getRawBits member function called" << std::endl;
	return this->_pointFixe;
}

void Fixed::setRawBits(int const raw)
{
	this->_pointFixe = raw;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	//std::cout << "Assignation operator called" << std::endl;
	
	if (this != &rhs)
		this->_pointFixe = rhs.getRawBits(); // utiliser la valeur de rhs pour mettre a jour _pointFixe de l'insance courante 
	return (*this);
}

bool Fixed::operator==(Fixed const & rhs)
{
	return (this->_pointFixe == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const & rhs)
{
	return (this->_pointFixe != rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const & rhs)
{
	return (this->_pointFixe >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs)
{
	return (this->_pointFixe <= rhs.getRawBits());
}

bool Fixed::operator<(Fixed const & rhs)
{
	return (this->_pointFixe < rhs.getRawBits());
}

bool Fixed::operator>(Fixed const & rhs)
{
	return (this->_pointFixe > rhs.getRawBits());
}

Fixed Fixed::operator+(Fixed const & rhs) const
{
	return (Fixed(this->_pointFixe + rhs.getRawBits()));
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	return (Fixed(this->_pointFixe - rhs.getRawBits()));
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
	return (Fixed(this->_pointFixe * rhs.getRawBits()));
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	return (Fixed(this->_pointFixe / rhs.getRawBits()));
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
std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}