/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 21:13:23 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/23 13:19:16 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src)
{
	
}


PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	this->_target = rhs._target;
	return (*this);
}

bool PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == true && executor.getGrade() <= this->getGrade_e())
	{
		std::cout << this->_target << " has been pardoned by Zafod Beeblebrox " << std::endl;
		return (true);
	}
	else
		throw Form::GradeTooLowException();
}

