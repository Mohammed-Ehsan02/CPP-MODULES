/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:04:24 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/08 17:44:37 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
	{
	private:
		Weapon &_A;
		std::string _name;
	public:
		HumanA(std::string name, Weapon &A);
		~HumanA();

		void	attack();
};

#endif