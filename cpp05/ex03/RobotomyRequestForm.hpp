/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:21:47 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/23 12:34:36 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTMYREQUESTFORM_H
#define ROBOTMYREQUESTFORM_H

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string _target;
public:
	RobotomyRequestForm(void); //canonical
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & src); //canonical
	virtual ~RobotomyRequestForm(); //canonical
	RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs); //canonical
	bool execute(Bureaucrat const & executor) const;
};

#endif