/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 23:59:54 by chicky            #+#    #+#             */
/*   Updated: 2022/01/06 17:30:30 by sbensarg         ###   ########.fr       */
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
	// pre-increment operator
	Fixed & operator ++ (void);
	// post-increment operator
	Fixed operator ++ (int);
	// pre-decrement operator
	Fixed & operator -- (void);
	// post-decrement operator
	Fixed operator -- (int);
	
	Fixed static & min(Fixed & nbr1, Fixed & nbr2);

	Fixed static const & min(Fixed const & nbr1, Fixed const & nbr2);

	Fixed static & max(Fixed & nbr1, Fixed & nbr2);

	Fixed static const & max(Fixed const & nbr1, Fixed const & nbr2);

};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
