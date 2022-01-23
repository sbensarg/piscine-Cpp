/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 21:12:35 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/22 22:25:03 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTPARDONFORM_H
#define PRESIDENTPARDONFORM_H

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string _target;
public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & src);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);
	bool execute(Bureaucrat const & executor) const;
};




#endif