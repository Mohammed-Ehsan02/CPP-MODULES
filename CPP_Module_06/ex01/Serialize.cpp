/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:38:58 by mkhan             #+#    #+#             */
/*   Updated: 2023/02/16 13:54:32 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serialize::Serialize()
{
}

Serialize::Serialize(Serialize const &object)
{
	*this = object;
}

Serialize & Serialize::operator=(Serialize const &rhs)
{
	if (this != &rhs)
	{}
	return (*this);
}

Serialize::~Serialize()
{
}

uintptr_t	Serialize::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serialize::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
