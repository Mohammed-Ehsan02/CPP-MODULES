/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 19:56:23 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/30 15:20:47 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_execGrade;

		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		}; 
		
	public:
		Form();
		Form(std::string name, int _signGrade, int _execGrade);
		Form(Form const &object);
		Form & operator=(Form const &rhs);
		~Form();
		std::string	getName() const;
		bool		getSigned() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
		void		beSigned(Bureaucrat const &rhs);
		
};

std::ostream &operator<<(std::ostream &out, Form const &rhs);

#endif