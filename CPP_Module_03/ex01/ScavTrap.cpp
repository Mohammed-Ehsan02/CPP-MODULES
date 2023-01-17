/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:20:08 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/17 17:16:17 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
// #include "ClapTrap.hpp"


ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default Constructor called" << std::endl;
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap Name Constructor called" << std::endl;
	this->_name = name;
	if (!this->_name.length())
		this->_name = "NO NAME GIVEN";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &Object)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	*this = Object;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "ScavTrap Copy Assignment Operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_attackDamage = rhs._attackDamage;
	this->_energyPoints = rhs._energyPoints;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor Called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (!this->_hitPoints)
	{
		std::cout << "ScavTrap " << this->_name << " has no hit points."
				<< std::endl;
		return ;
	}
	else if (!this->_energyPoints)
	{
		std::cout << "ScavTrap " << this->_name << " has no energy points."
				<< std::endl;
		return ;
	}
	this->_energyPoints -= 1;
	if (target.length())
		std::cout << "ScavTrap " << this->_name << " attacks " << target
				<< ", causing " << this->_attackDamage << " points of damage !"
				<< std::endl;
	else
		std::cout << "Target not set" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << "is now in Gate Keeper Mode."
			<< std::endl;
}