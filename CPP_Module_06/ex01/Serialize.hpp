/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:54:11 by mkhan             #+#    #+#             */
/*   Updated: 2023/02/16 13:57:59 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <stdint.h>
#include <cstdint>
#include <string>
#include <iostream>
struct Data
{
	std::string	s;
	int			n;
};

class Serialize
{
	public:
		Serialize();
		Serialize(Serialize const &object);
		Serialize & operator=(Serialize const &rhs);
		~Serialize();

		static uintptr_t	serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);
};

#endif