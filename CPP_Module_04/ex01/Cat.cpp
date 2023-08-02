/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:41:32 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/29 20:07:27 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): _brain(new Brain()), _type("Cat")
{
	std::cout << "Cat Default Constructor called" << std::endl;
}


Cat::Cat(Cat const &object): Animal(object)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = object;
}

Cat & Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat Copy Assignment Operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_brain = new Brain();
		this->_brain->setIdeas(rhs._brain->getIdeaas());

	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete (this->_brain);
}

void	Cat::makeSound() const
{
	std::cout << "Cat::makeSound() called" << std::endl;
	std::cout << "Cat makes sound ... Meow" << std::endl;
}

std::string	Cat::getType() const
{
	std::cout << "Cat::getType() called" << std::endl;
	return (this->_type);
}

Brain	*Cat::getBrain() const
{
	return (this->_brain);	
}