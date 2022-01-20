/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:00:29 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/18 23:34:14 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
private:
	std::string const _name;
	int _grade;
public:
	Bureaucrat(void);  // Canonical
	Bureaucrat(std::string const name, int g);
	~Bureaucrat();  // Canonical
	Bureaucrat(Bureaucrat const & src); // Canonical
	Bureaucrat & operator=(Bureaucrat  const &  rhs);  // Canonical
	std::string const getName(void) const;
	int getGrade(void) const;
	void inc_grade(void);
	void dec_grade(void);
	
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

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif