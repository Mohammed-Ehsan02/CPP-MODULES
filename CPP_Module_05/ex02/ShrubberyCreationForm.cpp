eal/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:16:55 by mkhan             #+#    #+#             */
/*   Updated: 2023/02/02 13:46:14 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target): AForm("ShruberryCreationForm", 145, 137), _target(_target)
{
	std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &object): AForm(object), _target(object.get_target())
{
	std::cout << "ShrubberyCreationForm Copy Constructor called" << std::endl;
	*this = object;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	std::cout << "ShrubberyCreationForm Copy Assignment Operator called" << std::endl;
	if (this != &rhs)
		AForm::operator=(rhs);
	return(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

std::string ShrubberyCreationForm::get_target() const
{
	return (this->_target);
}

void 	ShruberryCreationForm::write_ascii_tree() const
{
	std::ofstream file;
	try {
		file.open((this->_target + "_shrubbery").c_str());
		if (file.fail())
			throw ShrubberyCreationForm::MyAppropriateExecption();
	}
	catch (std::exception &e) {
		throw;
	}
	file << "               ,@@@@@@@,                 " << std::endl;
	file << "       ,,,.   ,@@@@@@/@@,  .oo8888o.     " << std::endl;
	file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\88/8o    " << std::endl;
	file << "   ,%&\%&&%&&%,@@@\@@@/@@@88\88888/88'   " << std::endl;
	file << "   %&&%&%&/%&&%@@\@@/ /@@@88888\88888'   " << std::endl;
	file << "   %&&%/ %&%%&&@@\ V /@@' `88\8 `/88'    " << std::endl;
	file << "   `&%\ ` /%&'    |.|        \ '|8'      " << std::endl;
	file << "       |o|        | |         | |        " << std::endl;
	file << "       |.|        | |         | |        " << std::endl;
	file << "jgs \\/ ._\//_/__/  ,\_//__\\/.  \_//__/_" << std::endl;
	file.close();
}

void	 ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (this->getSigned())
		{
			if (executor.getGrade() <= this->getExecGrade())
			{
				this->write_ascii_tree();
				std::cout << this->_target << "_shruberry tree has been created" << std::endl;
			}
			else
				throw AForm::GradeTooLowException();
		}
		else
			throw std::out_of_range("Bureaucrat Form not signed");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

const char *ShrubberyCreationForm::MyAppropriateExecption::what() const throw() {
	return ("Couldn't Create/Open File");
}