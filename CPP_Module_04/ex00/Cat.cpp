/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:41:32 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/18 21:00:06 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): _type("Cat")
{
	std::cout << "Cat Default Constructor called" << std::endl;
}


Cat::Cat(Cat const &Object): Animal::Animal(Object)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = Object;
}

Cat & Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat Copy Assignment Operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
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