/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:19:54 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/17 16:11:41 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{	
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &Object);
		ScavTrap &operator=(ScavTrap const &rhs);
		~ScavTrap();

		void	attack(const std::string &target);
		void	guardGate();
};

#endif