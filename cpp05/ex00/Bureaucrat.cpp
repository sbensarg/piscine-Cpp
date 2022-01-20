/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:09:33 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/19 00:32:37 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(std::string const name, int g) : _name(name)
{
	if (g < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (g > 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->_grade = g;
	}
}

Bureaucrat::~Bureaucrat()
{
	
}
Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat  const &  rhs)
{
	this->_grade = rhs._grade;
	return (*this);
}

std::string const Bureaucrat::getName(void) const
{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Invalid grade : Grade too high!!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Invalid grade : Grade too low!!");
}

void Bureaucrat::inc_grade(void)
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade - 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade--;
}

void Bureaucrat::dec_grade(void)
{
	if (this->_grade + 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() ;
	return (o);
}