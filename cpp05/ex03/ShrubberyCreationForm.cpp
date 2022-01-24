/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:59:16 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/23 13:05:07 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("jg", 145, 137), _target(target)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src)
{
	
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	this->_target = rhs._target;
	return (*this);
}

const char* ShrubberyCreationForm::WriteErrException::what() const throw()
{
	return ("Exception occured when writing to a file!!");
}

void ShrubberyCreationForm::action_shrubberycreationform(void) const
{
	std::string str = this->_target + "_shrubbery";

	std::ofstream outFile(str.c_str());
	if (!outFile.is_open())  
		throw ShrubberyCreationForm::WriteErrException();
	outFile << "                                               |" << std::endl;
	outFile << "                                              -x-" << std::endl;
	outFile << "                                               |" << std::endl;
	outFile << "              v .   ._, |_  .," << std::endl;
	outFile << "           `-._\\/  .  \\ /    |/_" << std::endl;
	outFile << "               \\  _\\, y | \\//" << std::endl;
	outFile << "         _\\_.___\\, \\/ -.\\||" << std::endl;
	outFile << "           `7-,--.`._||  / / ," << std::endl;
	outFile << "           /'     `-. `./ / |/_.'" << std::endl;
	outFile << "                     |    |//" << std::endl;
	outFile << "                     |_    /" << std::endl;
	outFile << "                     |-   |" << std::endl;
	outFile << "                     |   =|" << std::endl;
	outFile << "                     |    |" << std::endl;
	outFile << "--------------------/ ,  . \\--------._" << std::endl;
}

bool ShrubberyCreationForm::execute(Bureaucrat const & executor) const 
{
	if (this->getIsSigned() == true && executor.getGrade() <= this->getGrade_e())
	{
		action_shrubberycreationform();
		return (true);
	}
	else
		throw Form::GradeTooLowException();
}
