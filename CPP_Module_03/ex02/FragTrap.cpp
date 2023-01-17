/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:41:18 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/17 18:01:15 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap()
{
	std::cout << "FragTrap Default Construtor is called." << std::endl;
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap Name Constructor called" << std::endl;
	this->_name = name;
	if (!this->_name.length())
		this->_name = "NO NAME GIVEN";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &Object)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	*this = Object;
}

FragTrap & FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "FragTrap Copy Assignment Operator called" << std::endl;
	if (this != &rhs)
	{	
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_attackDamage = rhs._attackDamage;
		this->_energyPoints = rhs._energyPoints;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor Called" << std::endl;
}

void	FragTrap::highFiveGuys()
{
	std::cout << "FragTrap " << this->_name << " is asking for HighFive"
			<< std::endl;
}