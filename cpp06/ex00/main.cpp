/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:14:11 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/30 22:40:10 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cnv_scalar_types.hpp"
#include <iomanip>
#include <limits.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::cout << std::fixed << std::setprecision(1);
		Cnv_scalar_types	a(argv[1]);
		float 				b = a;
		int					c = a;
		double				d = a;
		char				e = a;
		if (a.flag_c != 1)
		{
			if (e < 32)
				std::cout << "char: Non displayable" << std::endl;
			else
				std::cout << "char: " << e << std::endl;
		}
		if (a.flag_i != 1)
			std::cout << "int: " << c << std::endl;
		if (a.flag_f != 1)
			std::cout << "float: "<< b << "f" << std::endl;
		if (a.flag_d != 1)
			std::cout << "double: " << d << std::endl;
	}
}