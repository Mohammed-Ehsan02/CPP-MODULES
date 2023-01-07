/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 17:38:01 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/07 18:34:38 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	int i;
	Zombie *zombiee = new Zombie[N];

	for(i = 0; i < N; i++)
	{
		zombiee[i].setName(name);
		zombiee[i].announce();
	}
	return(zombiee);
}
