/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 14:50:15 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/07 17:55:29 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name)
{
}

Zombie::Zombie(void)
{
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZEEDD..." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

