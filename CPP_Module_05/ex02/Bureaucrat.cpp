/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:28:01 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/30 16:57:55 by mkhan            ###   ########.fr       */
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
			throw Bureaucrat::GradeTooLowException();
		else if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade = grade;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &object)
{
	std::cout << "Bureaucrat Copy Constructor called" << std::endl;
	*this = object;
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
	return (this->_grade);
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

void	Bureaucrat::gradeDecreament()
{
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
	return("Grade Too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return("Grade Too Low");
}

void	Bureaucrat::signAForm(AForm &Aform)
{
	try
	{
		Aform.beSigned(*this);
		std::cout << this->_name << " signed " << Aform.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name << " couldn't sign " << Aform.getName() << 
				" because " << e.what() << '\n';
	}
}

void Bureaucrat::executeForm(AForm const &Aform) {
	try {
		Aform.execute(*this);
		std::cout << _name << " executes " << Aform.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << _name << " couldn't execute " << Aform.getName() << " because " << e.what() << std::endl;
	}
}