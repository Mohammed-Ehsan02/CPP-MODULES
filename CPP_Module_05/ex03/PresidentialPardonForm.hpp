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

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string	_target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string _target);
		PresidentialPardonForm(PresidentialPardonForm const &object);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
		~PresidentialPardonForm();

		std::string	getTarget() const;
		void	execute(Bureaucrat const &executor) const;
};

#endif