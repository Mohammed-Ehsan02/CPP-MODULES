/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:04:39 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/08 20:02:32 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon *_WeaponB;
		std::string _name;
	public:
		HumanB(std::string name);
		~HumanB();
		
		void	attack();
		void	setWeapon(Weapon &B);
};

#endif