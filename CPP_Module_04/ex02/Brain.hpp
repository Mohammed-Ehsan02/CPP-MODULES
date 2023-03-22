/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:04:20 by mkhan             #+#    #+#             */
/*   Updated: 2023/03/22 13:33:05 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>
# include <string>
# include <cstdlib>


class Brain
{
	public:
		std::string	ideas[100];

		Brain();
		Brain(Brain const &Object);
		Brain &operator=(Brain const &rhs);
		~Brain();
		void	getIdeas() const;
		void	setIdeas(std::string *ideas);
		std::string *getIdeaas();
		void	changeIdeas();
		
};

#endif