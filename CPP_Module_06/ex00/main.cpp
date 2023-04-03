/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:48:36 by mkhan             #+#    #+#             */
/*   Updated: 2023/02/16 13:34:28 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	is_convertible(std::string argv)
{
	if ()
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (is_convertable(argv[1]) && argv[1][0])
		{
			ScalarConverter convert(argv[1]);
			convert.convert();
			return (0);
		}
		std::cout << "Invalid Argument" << std::endl;
		return (1);
	}
	std::cout << "Invalid Number of arguments. -- usage : ./convert <arg>" << std::endl;
	return (1);
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// ScalarConverter::convert("0");
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// ScalarConverter::convert("nan");
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// ScalarConverter::convert("inff");
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// ScalarConverter::convert("-inff");
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// ScalarConverter::convert("42.0f");
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// ScalarConverter::convert("67");
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// ScalarConverter::convert("97.0");
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// ScalarConverter::convert("2147483647");
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// ScalarConverter::convert("2147483648");
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// ScalarConverter::convert("-2147483648");
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// ScalarConverter::convert("-2147483649");
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// ScalarConverter::convert("12345678912345");
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
	// ScalarConverter::convert("-12345678912345");
	// std::cout << "-----------------------------------------------------------------------------" << std::endl;
}