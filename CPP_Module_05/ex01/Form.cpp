/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 20:10:02 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/29 20:10:09 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("No Name"), _grade(150)
{
	std::cout << "Form Default Constructor called" << std::endl;
}

Form::Form(std::string name, int grade): _name(name), _grade(grade)
{
	std::cout << "Form Name Constructor called" << std::endl;
	try
	{
		if (grade > 150)
			throw Form::GradeTooHighException();
		else if (grade < 1)
			throw Form::GradeTooLowException();
		else
			this->_grade = grade;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

Form::Form(Form const &object)
{
	std::cout << "Form Copy Constructor called" << std::endl;
	*this = object;
}

Form & Form::operator=(Form const &rhs)
{
	std::cout << "Form Copy Assignment Operator = called" << std::endl;
	if (this != &rhs)
	{
		const_cast<std::string&>(this->_name) = rhs.getName();
		this->_grade = rhs.getGrade();
	}
	return(*this);
}

std::ostream &operator<<(std::ostream &out, Form const &rhs)
{
	std::cout << "Form Copy Assignment Operator << called" << std::endl;
	try
	{
		if (rhs.getGrade() > 150)
			throw std::exception();
		else if (rhs.getGrade() < 1)
			throw std::exception();
		else
			out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << "Grade Not In Range" << '\n';
	}
	return (out);
}

Form::~Form()
{
	std::cout << "Form Destructor called" << std::endl;
}

int	Form::getGrade() const
{
	// std::cout << "Form getGrade() called" << std::endl;
	return (this->_grade);
}

std::string Form::getName() const
{
	// std::cout << "Form getName() called" << std::endl;
	return (this->_name);
}

void	Form::gradeDecreament()
{
	// std::cout << "Form gradeDecreament called" << std::endl;
	try
	{
		if (this->_grade > 150)
			throw Form::GradeTooLowException();
		else if (this->_grade < 1)
			throw Form::GradeTooHighException();
		else
			this->_grade++;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

void	Form::gradeIncreament()
{
	// std::cout << "Form gradeIncreament called" << std::endl;
	try
	{
		if (this->_grade > 150)
			throw Form::GradeTooLowException();
		else if (this->_grade < 1)
			throw Form::GradeTooHighException();
		else
			this->_grade--;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

const char* Form::GradeTooHighException::what() const throw()
{
	// std::cout << "Form GradeTooHighException called" << std::endl;
	return("Grade Too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
	// std::cout << "Form GradeTooLowException called" << std::endl;
	return("Grade Too Low");
}