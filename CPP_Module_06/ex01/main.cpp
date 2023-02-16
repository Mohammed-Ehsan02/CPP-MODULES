/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:54:58 by mkhan             #+#    #+#             */
/*   Updated: 2023/02/16 14:02:56 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main()
{
	Data data;
	data.s = "Data is Money";
	
	uintptr_t serializedValue = Serialize::serialize(&data);
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::cout << "serializedValue  : " << serializedValue << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	
	Data *deserializedValue = Serialize::deserialize(serializedValue);

	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::cout << "&data            : " << &data << std::endl;
	std::cout << "deserializeValue : " << deserializedValue << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	
	if (&data == deserializedValue)
		std::cout << "Data encryption successful" << std::endl;
	else
		std::cout << "Data encryption failure" << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	return (0);
}