/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:04:51 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/08 19:26:42 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	this->_B = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &B)
{
	this->_B = &B;
}

void	HumanB::attack()
{
	if (_B)
		std::cout << this->_name << " attacks with their "
				<< this->_B->getType() << std::endl;
	else
		std::cout << this->_name << " has no weapon to attack." << std::endl;
}