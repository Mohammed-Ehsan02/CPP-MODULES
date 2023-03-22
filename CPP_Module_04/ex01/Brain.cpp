/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:05:54 by mkhan             #+#    #+#             */
/*   Updated: 2023/03/22 13:45:37 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor called" << std::endl;
	std::string idea[10] = {"IDEA1", "IDEA2","IDEA3","IDEA4","IDEA5","IDEA6",
							"IDEA7","IDEA8","IDEA9","IDEA10"};
	for(int i = 0; i < 10; i++)
		this->ideas[i] = idea[rand() % 10];
	for(int i = 0; i < 10; i++)
		std::cout << ideas[i] << std::endl;
}


Brain::Brain(Brain const &Object)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = Object;
}

Brain & Brain::operator=(Brain const &rhs)
{
	std::cout << "Brain Copy Assignment Operator called" << std::endl;
	if (this != &rhs)
	{
		for(int i = 0; i < 10; i++)
			this->ideas[i] = rhs.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

void	Brain::getIdeas() const
{
	for(int i = 0; i < 10; i++)
		std::cout << ideas[i] << std::endl;
}

void	Brain::setIdeas(std::string *ideas)
{
	for (int i = 0; i < 10; i++)
		this->ideas[i] = ideas[i];
}

void	Brain::changeIdeas() {
	for (int i = 0; i < 10; i++)
		this->ideas[i] = "Another ideas";
}

std::string	*Brain::getIdeaas() {
	return this->ideas;
}