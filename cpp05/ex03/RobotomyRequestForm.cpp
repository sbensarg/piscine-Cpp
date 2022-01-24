/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:34:37 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/23 13:17:36 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(void)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Roboto my Request", 72, 45), _target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src)
{
	
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	this->_target = rhs._target;
	return (*this);
}

bool RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == true && executor.getGrade() <= this->getGrade_e())
	{
		std::cout << "Drilling Noises!!!!!!!" << std::endl;
		srand(time(0)); // Use current time as seed for random generator
		int nbr = rand();
		if (nbr % 2 < 0.5) // 50% chance of being here
			std::cout << this->_target << " has been robotomized successfully 50% of the time " << std::endl;
		else
			std::cout << this->_target << " has been not robotomized the remaining 50% of the time " << std::endl;
		return (true);
	}	
	else
		throw Form::GradeTooLowException();
}
