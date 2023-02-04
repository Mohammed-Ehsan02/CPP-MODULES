/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:57:00 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/30 17:07:24 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	{
		std::string formName = "presidential pardon"; 
		std::string formTarget = "Tae";
		if (formName.empty() || formTarget.empty()) 
		{
				throw std::invalid_argument("Invalid parameters");
		}
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		Intern intern;
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		Bureaucrat bureaucrat("Adam", 1);
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		AForm *f = intern.makeForm(formName, formTarget);
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		std::cout << *f;
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		bureaucrat.signAForm(*f);
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		std::cout << (*f).getSigned() << std::endl;
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		bureaucrat.executeForm(*f);
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		delete f;
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
	}
	{
		std::string formName = "robotomy request"; 
		std::string formTarget = "Bender";
		if (formName.empty() || formTarget.empty()) 
		{
				throw std::invalid_argument("Invalid parameters");
		}
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		Intern intern;
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		Bureaucrat bureaucrat("Hope", 1);
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		AForm *f = intern.makeForm(formName, formTarget);
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		std::cout << *f;
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		bureaucrat.signAForm(*f);
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		std::cout << (*f).getSigned() << std::endl;
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		bureaucrat.executeForm(*f);
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		delete f;
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
	}
	{
		std::string formName = "shrubbery creation"; 
		std::string formTarget = "Gorms";
		if (formName.empty() || formTarget.empty()) 
		{
				throw std::invalid_argument("Invalid parameters");
		}
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		Intern intern;
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		Bureaucrat bureaucrat("John", 1);
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		AForm *f = intern.makeForm(formName, formTarget);
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		std::cout << *f;
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		bureaucrat.signAForm(*f);
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		std::cout << (*f).getSigned() << std::endl;
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		bureaucrat.executeForm(*f);
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		delete f;
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
	}
}