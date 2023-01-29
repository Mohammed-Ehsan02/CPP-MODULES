/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:28:01 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/29 19:43:26 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(): _name("No Name"), _grade(125)
{
	std::cout << "Bureaucrat Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	std::cout << "Bureaucrat Name Constructor called" << std::endl;
	try
	{
		if (grade > 150)
			throw Bureaucrat::GradeTooHighException();
		else if (grade < 1)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade = grade;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &Object)
{
	std::cout << "Bureaucrat Copy Constructor called" << std::endl;
	*this = Object;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs)
{
	std::cout << "Bureaucrat Copy Assignment Operator = called" << std::endl;
	if (this != &rhs)
	{
		const_cast<std::string&>(this->_name) = rhs.getName();
		this->_grade = rhs.getGrade();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &rhs)
{
	std::cout << "Bureaucrat Copy Assignment Operator << called" << std::endl;
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

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

int	Bureaucrat::getGrade() const
{
	// std::cout << "Bureaucrat getGrade() called" << std::endl;
	return (this->_grade);
}

std::string Bureaucrat::getName() const
{
	// std::cout << "Bureaucrat getName() called" << std::endl;
	return (this->_name);
}

void	Bureaucrat::gradeDecreament()
{
	// std::cout << "Bureaucrat gradeDecreament called" << std::endl;
	try
	{
		if (this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade++;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

void	Bureaucrat::gradeIncreament()
{
	// std::cout << "Bureaucrat gradeIncreament called" << std::endl;
	try
	{
		if (this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade--;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	// std::cout << "Bureaucrat GradeTooHighException called" << std::endl;
	return("Grade Too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	// std::cout << "Bureaucrat GradeTooLowException called" << std::endl;
	return("Grade Too Low");
}
