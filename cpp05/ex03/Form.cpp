/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 01:21:10 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/07 16:45:19 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _nameform("default"), _is_signed(false),  _grade_s(1), _grade_e(1)
{
	
}

Form::Form(std::string n_form, int g_s, int g_e) : _nameform(n_form), _is_signed(false), _grade_s(g_s), _grade_e(g_e)
{
	if (_grade_s < 1 || _grade_e < 1)
		throw Form::GradeTooHighException();
	else if (_grade_s > 150 || _grade_e > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
	
}

Form::Form(Form const & src) : _nameform(src._nameform), _is_signed(false), _grade_s(src._grade_s), _grade_e(src._grade_e)
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
