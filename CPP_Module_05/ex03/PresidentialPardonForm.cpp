/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:19:47 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/30 17:20:08 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string _target): AForm("PresidentialPardonForm", 25, 5), _target(_target)
{
	std::cout << "PresidentialPardonForm Default Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &object): AForm(object), _target(object.getTarget())
{
	std::cout << "PresidentialPardonForm Copy Constructor called" << std::endl;
	*this = object;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	std::cout << "PresidentialPardonForm Copy Assignment Operator called" << std::endl;
	if (this != &rhs)
		AForm::operator=(rhs);
	return(*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (this->getSigned())
		{
			if (executor.getGrade() <= this->getExecGrade())
			{
				std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;

			}
			else
				throw std::out_of_range("Bureaucrat Grade Not enough");
		}
		else
			throw std::out_of_range("Bureaucrat Form not signed");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
}