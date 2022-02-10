/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cnv_scalar_types.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:12:47 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/08 17:17:11 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cnv_scalar_types.hpp"

Cnv_scalar_types::Cnv_scalar_types(void)
{
	
}

Cnv_scalar_types::Cnv_scalar_types(std::string v) : _v(v)
{

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

