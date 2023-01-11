/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:04:14 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/08 20:03:25 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &A): _WeaponA(A), _name(name)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their "
			<< this->_WeaponA.getType() << std::endl;
}