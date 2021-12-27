/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 23:59:54 by chicky            #+#    #+#             */
/*   Updated: 2021/12/26 01:22:36 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
private:
	int _pointFixe;
	static const int _fract = 8;
public:
	Fixed(void); // Canonical
	Fixed(Fixed const & src); // Canonical
	~Fixed(); // Canonical
	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed & operator=(Fixed const & rhs); // Canonical
};


#endif
