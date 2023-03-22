/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:32:13 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/29 20:07:27 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog(): _brain(new Brain()),  _type("Dog")
{
	std::cout << "Dog Default Constructor called" << std::endl;
}


Dog::Dog(Dog const &object): Animal(object)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = object;
}

Dog & Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog Copy Assignment Operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
		if (this->_brain)
			delete (this->_brain);
		this->_brain = new Brain();
		this->_brain->setIdeas(rhs._brain->getIdeaas());
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete (this->_brain);
}

void	Dog::makeSound() const
{
	std::cout << "Dog::makeSound() called" << std::endl;
	std::cout << "Dog makes sound ... Woof" << std::endl;
}

std::string	Dog::getType() const
{
	std::cout << "Dog::getType() called" << std::endl;
	return (this->_type);
}

Brain	*Dog::getbrain() const
{
	return (this->_brain);
}