/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:57:00 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/29 19:37:27 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	{
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		Bureaucrat A("Ram", 151);
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
	}
	{
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		Bureaucrat C("One", 5);
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		C.gradeDecreament();
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		std::cout << C;
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
	}
	{
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		Bureaucrat C("Tom",1);
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		C.gradeIncreament();
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		std::cout << C;
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
	}
	{
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		Bureaucrat B("john", 151);
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		B.gradeIncreament();
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		std::cout << B;
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
	}
	{
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		Bureaucrat D("Adam", 150);
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		D.gradeDecreament();
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		std::cout << D;
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
	}
	return (0);
}