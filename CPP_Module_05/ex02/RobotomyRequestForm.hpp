/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:18:27 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/31 09:49:28 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

class RobotomyRequestForm
{
private:
	/* data */
public:
	RobotomyRequestForm(/* args */);
	~RobotomyRequestForm();
};

RobotomyRequestForm::RobotomyRequestForm(/* args */)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &object)
{
	*this = object;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}


#endif