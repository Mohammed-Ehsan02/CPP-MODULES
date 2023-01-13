/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:04:51 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/08 20:02:55 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	this->_WeaponB = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &B)
{
	this->_WeaponB = &B;
}

void	HumanB::attack()
{
	if (_WeaponB)
		std::cout << this->_name << " attacks with their "
				<< this->_WeaponB->getType() << std::endl;
	else
		std::cout << this->_name << " has no weapon to attack." << std::endl;
}