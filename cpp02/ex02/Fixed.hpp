/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 23:59:54 by chicky            #+#    #+#             */
/*   Updated: 2021/12/27 15:51:56 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _pointFixe;
	static const int _fract = 8;
public:
	Fixed(void); // Canonical
	Fixed(int const n);
	Fixed(float const f);
	Fixed(Fixed const & src); // Canonical
	~Fixed(); // Canonical
	float toFloat(void) const;
	int toInt( void ) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed & operator=(Fixed const & rhs); // Canonical
	//comparison operators:
	bool operator==(Fixed const & rhs);
	bool operator!=(Fixed const & rhs);
	bool operator>(Fixed const & rhs);
	bool operator<(Fixed const & rhs);
	bool operator>=(Fixed const & rhs);
	bool operator<=(Fixed const & rhs);
	// arithmetic operators:
	Fixed operator+(Fixed const & rhs) const;
	Fixed operator-(Fixed const & rhs) const;
	Fixed operator*(Fixed const & rhs) const;
	Fixed operator/(Fixed const & rhs) const;
	 // Overload ++ when used as prefix
	Fixed & operator ++ (void);
	 // Overload ++ when used as postfix
	Fixed operator ++ (int);
	 
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
