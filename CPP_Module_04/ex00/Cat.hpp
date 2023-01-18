/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:40:24 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/18 14:42:15 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
	protected:
		std::string _type;
	
	public:
		Cat();
		Cat(Cat const &Object);
		Cat &operator=(Cat const &rhs);
		~Cat();

		void	makeSound() const;
		std::string	getType() const;
};

#endif