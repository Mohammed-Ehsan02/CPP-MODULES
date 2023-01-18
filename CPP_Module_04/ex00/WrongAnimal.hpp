/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:42:40 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/18 21:03:39 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string _type;
		
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &Object);
		WrongAnimal &operator=(WrongAnimal const &rhs);
		virtual ~WrongAnimal();

		virtual void	makeSound() const;
		virtual std::string	getType() const;
};

#endif