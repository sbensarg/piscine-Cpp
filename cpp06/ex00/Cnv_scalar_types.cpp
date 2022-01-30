/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cnv_scalar_types.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:12:47 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/30 22:42:13 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cnv_scalar_types.hpp"

Cnv_scalar_types::Cnv_scalar_types(void)
{
	
}

Cnv_scalar_types::Cnv_scalar_types(std::string v) : _v(v)
{
	// for(unsigned int i = 0; i < this->_v.length() ; i++)
	// {
	// 	if ((this->_v[i] >= '0' && this->_v[i] <= '9') || this->_v[i] == '.' || this->_v[i] == 'f')
	// 	{
	// 		if (this->_v[i] == '.')
	// 		{
	// 			flag = 1;
	// 			for(unsigned int j = i; j < this->_v.length(); j++)
	// 			{
	// 				if (this->_v[j] == 'f')
	// 					flag = 2;
	// 			}
	// 		}
	// 	}
	// 	else
	// 		flag = -1;
	// }
}

Cnv_scalar_types::Cnv_scalar_types(Cnv_scalar_types const & src)
{
	*this = src;
}

Cnv_scalar_types::~Cnv_scalar_types()
{
	
}

Cnv_scalar_types & Cnv_scalar_types::operator=(Cnv_scalar_types const & rhs)
{
	this->_v = rhs._v;
	return (*this);
}


std::string const Cnv_scalar_types::Getv(void) const
{
	return (this->_v);
}

Cnv_scalar_types::operator char()
{
	int d;
	char c;
	try
	{
		d = std::stoi(this->_v.c_str());
		c = static_cast<char>(d);
	}
	catch (const std::invalid_argument& ia){
		std::cout << "char: impossible" << std::endl;
		this->flag_c = 1;
	}
	catch (const std::out_of_range& oor) {
		std::cout << "char: impossible" << std::endl;
		this->flag_c = 1;
	}
	return (c);
}

Cnv_scalar_types::operator int()
{
	int	d = 0;
	
	try
	{
		d = static_cast<int>(std::stoi(this->_v.c_str()));
	}
	catch (const std::invalid_argument& ia){
		std::cout << "int: impossible" << std::endl;
		this->flag_i = 1; 
	}
	catch (const std::out_of_range& oor) {
		std::cout << "int: impossible" << std::endl;
		this->flag_i = 1; 
	}
	return (d);
}

Cnv_scalar_types::operator float()
{	
	float f = 0;
	
	try
	{
		f = static_cast<float>(std::stof(this->_v.c_str(), NULL));
	}
	catch (const std::invalid_argument& ia){
		std::cout << "float: impossible" << std::endl;
		this->flag_f = 1;
	}
	catch (const std::out_of_range& oor) {
		std::cout << "float: impossible" << std::endl;
		this->flag_f = 1;
	}
	
	return (f);
}

Cnv_scalar_types::operator double()
{
	double d;
	
	try
	{
		d = static_cast<double>(std::stod(this->_v.c_str(), NULL));
	}
	catch (const std::invalid_argument& ia){
		std::cout << "double: impossible" << std::endl;
		this->flag_d = 1;
	}
	catch (const std::out_of_range& oor) {
		std::cout << "double: impossible" << std::endl;
		this->flag_d = 1;
	}
	
	return (d);
}

