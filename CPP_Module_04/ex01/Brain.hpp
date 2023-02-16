/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:04:20 by mkhan             #+#    #+#             */
/*   Updated: 2023/02/16 20:13:59 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	public:
		Brain();
		Brain(Brain const &Object);
		Brain &operator=(Brain const &rhs);
		~Brain();
		void	getIdeas() const;
		void	setIdeas(std::string *ideas);
		void	changeIdeas();
		
		std::string	ideas[100];
};

#endif