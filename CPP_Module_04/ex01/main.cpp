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
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// const Animal* meta = new Animal();
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// const Animal* j = new Dog();
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// const Animal* i = new Cat();
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// i->makeSound();
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// j->makeSound();
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// meta->makeSound();
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// std::cout << "---------------------------WRONG-ANIMAL--------------------------------------" << std::endl;
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// const WrongAnimal* meta1 = new WrongAnimal();
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// const WrongAnimal* j1 = new WrongCat();
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// const WrongAnimal* i1 = new WrongCat();
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// std::cout << j1->getType() << " " << std::endl;
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// std::cout << i1->getType() << " " << std::endl;
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// i1->makeSound();
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// j1->makeSound();
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// meta1->makeSound();
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// delete meta;
	// delete meta1;
	// delete i;
	// delete i1;
	// delete j;
	// delete j1;
	// return 0;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	int size = 10;
	Animal* animals[size];
	Animal bla;
	for (int i = 0; i < size + 1; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << "---------------------" << std::endl;
	for (int i = size; i > -1; i--)
		delete animals[i];
	std::cout << "---------------------" << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;

	Dog tmp;
	{
		Dog basic = tmp;
	}
}