/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 19:56:23 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/29 20:12:04 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>

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
		Form(std::string name, int grade);
		Form(Form const &object);
		Form & operator=(Form const &rhs);
		~Form();
		std::string	getName() const;
		int			getGrade() const;
		void		gradeIncreament();
		void		gradeDecreament();
};

std::ostream &operator<<(std::ostream &out, Form const &rhs);

#endif