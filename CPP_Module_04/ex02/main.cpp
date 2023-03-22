/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:34:23 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/18 21:06:30 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	const Animal* j = new Dog();
	// Animal bla;
	delete j;//should not create a leak

	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
}