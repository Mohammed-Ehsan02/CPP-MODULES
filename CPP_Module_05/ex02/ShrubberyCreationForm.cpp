/* ************************************************************************** */
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

ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &object)
{
	std::cout << "ShrubberyCreationForm Copy Constructor called" << std::endl;
	*this = object;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	std::cout << "ShrubberyCreationForm Copy Assignment Operator called" << std::endl;
	if (this != &rhs)
		this->_target = rhs.get_target();
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

void	 ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (!AForm::_isSigned)
			throw AForm::
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}