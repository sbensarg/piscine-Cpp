/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 01:21:10 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/21 21:11:24 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void)
{
	
}

Form::Form(std::string const n_form, int const g_s, int const g_e) : _nameform(n_form), _is_signed(false)
{
	if (g_s < 1 || g_e < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (g_s > 150 || g_e > 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->_grade_s = g_s;
		this->_grade_e = g_e;
	}
}

Form::~Form()
{
	
}

Form::Form(Form const & src)
{
	*this = src;
}

Form & Form::operator=(Form  const &  rhs)
{
	this->_is_signed = rhs._is_signed;
	return (*this);
}

std::string const Form::getNameForm(void) const
{
	return (this->_nameform);
}

bool Form::getIsSigned(void) const
{
	return (this->_is_signed);
}

int Form::getGrade_s(void) const
{
	return (this->_grade_s);
}

int Form::getGrade_e(void) const
{
	return (this->_grade_e);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Invalid grade : Grade too high (form)!!");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Invalid grade : Grade too low (form)!!");
}

void Form::beSigned(Bureaucrat& b)
{
	if (b.getGrade() <= this->_grade_s && b.getGrade() <= this->_grade_e)
		this->_is_signed = true;
	else
	{
		this->_is_signed = false;
		throw Form::GradeTooLowException();
	}
}

std::ostream & operator<<(std::ostream & o, Form const & rhs)
{
	if (rhs.getIsSigned() == true)
		o << "Form " << rhs.getNameForm() << " is successfully signed !!";
	else
		o << "Form " << rhs.getNameForm() << " is not signed !!";
	return (o);
}
