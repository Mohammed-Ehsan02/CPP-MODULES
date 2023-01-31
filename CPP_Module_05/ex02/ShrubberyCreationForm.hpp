/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:14:38 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/30 19:18:23 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

class ShrubberyCreationForm
{
private:
	
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const &object);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const &rhs);
	~ShrubberyCreationForm();
};

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &object)
{
	*this = object;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


#endif