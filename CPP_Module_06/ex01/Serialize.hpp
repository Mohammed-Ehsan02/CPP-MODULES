/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:54:11 by mkhan             #+#    #+#             */
/*   Updated: 2023/05/24 13:56:32 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <stdint.h>
struct Data
{
	std::string	s;
	int			n;
};

class Serialize
{
	private:
		Serialize();
		Serialize(Serialize const &object);
		Serialize & operator=(Serialize const &rhs);

	public:
		~Serialize();
		static uintptr_t	serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);
};

#endif