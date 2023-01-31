/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:19:56 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/31 09:49:44 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

class PresidentialPardonForm
{
private:
	/* data */
public:
	PresidentialPardonForm(/* args */);
	~PresidentialPardonForm();
};

PresidentialPardonForm::PresidentialPardonForm(/* args */)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &object)
{
	*this = object;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}


#endif