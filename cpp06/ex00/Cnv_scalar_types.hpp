/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cnv_scalar_types.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:12:16 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/08 17:16:46 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CNV_SCALAR_TYPES_H
#define CNV_SCALAR_TYPES_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include <typeinfo>
#include <cstdlib>
#include <errno.h>
class Cnv_scalar_types
{
private:
	std::string _v;
public:
	Cnv_scalar_types(void);
	Cnv_scalar_types(std::string v);
	Cnv_scalar_types(Cnv_scalar_types const & src);
	~Cnv_scalar_types();
	Cnv_scalar_types & operator=(Cnv_scalar_types const & rhs);
	operator char();
	operator int();
	operator float();
	operator double();
	int flag_i;
	int flag_c;
	int flag_f;
	int flag_d;
};

#endif