/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:14:38 by mkhan             #+#    #+#             */
/*   Updated: 2023/02/02 13:37:19 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
class ShrubberyCreationForm : public AForm
{
private:
	std::string	_target;
	// class MyAppropriateExecption : public std::exception
	// {
	// 	public:
	// 		const char *what() const throw();
	// };
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const &object);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const &rhs);
	~ShrubberyCreationForm();
	void	execute(Bureaucrat const &executor) const;
	std::string	get_target() const;
};

#endif