/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 01:21:02 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/07 16:03:39 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef FORM_H
// #define FORM_H
#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const	_nameform;
	bool 				_is_signed;
	int			const	_grade_s;
	int			const	_grade_e;	
public:
	Form(void); // Canonical
	Form(std::string n_form, int g_s, int  g_e); 
	~Form(); // Canonical
	Form(Form const & src); // Canonical
	Form & operator=(Form  const &  rhs);  // Canonical
	std::string const getNameForm(void) const;
	bool getIsSigned(void) const;
	int getGrade_s(void) const;
	int getGrade_e(void) const;
	void beSigned(Bureaucrat& b);

	//exception class 1
	class GradeTooHighException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
		//exception class 2
	class GradeTooLowException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};
std::ostream & operator<<(std::ostream & o, Form const & rhs);
//#endif