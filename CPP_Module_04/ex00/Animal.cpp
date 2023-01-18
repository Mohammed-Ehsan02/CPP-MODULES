/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:57:45 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/18 14:31:40 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Animal")
{
	std::cout << "Animal Default Constructor called" << std::endl;
}


Animal::Animal(Animal const &Object)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = Object;
}

Animal & Animal::operator=(Animal const &rhs)
{
	std::cout << "Animal Copy Assignment Operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Default Destructor called" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "Animal::makeSound() called" << std::endl;
	std::cout << "Animal makes sound ..." << std::endl;
}

std::string Animal::getType() const
{
	std::cout << "Animal::getType() called" << std::endl;
	return (this->_type);
}