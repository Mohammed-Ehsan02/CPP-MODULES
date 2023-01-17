/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:30:29 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/17 10:19:01 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string _name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
		
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &Object);
		ClapTrap &operator=(ClapTrap const &rhs);
		~ClapTrap();

		void	attack(const std::string &target);
		void	takeDamage(unsigned int	amount);
		void	beRepaired(unsigned int	amount);
};




#endif