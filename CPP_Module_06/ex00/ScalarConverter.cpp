/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:16:23 by mkhan             #+#    #+#             */
/*   Updated: 2023/02/15 19:40:53 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(ScalarConverter const &object)
{
	*this = object;
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const &rhs)
{
	if (this != &rhs)
	{
	}
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
}

// void	ScalarConverter::toChar(std::string str)
// {

// }

void	ScalarConverter::toInt(std::string str)
{
	int	num = 0;
	try
	{
		if (str.length() == 1 && !isdigit(str[0]))
			num = static_cast<int>(str[0]);
		else
		{
			int	base = 10;
			char *endptr = NULL;
			num = std::strtoll
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	if (str.length() == 1 && !isdigit(str[0]))
		num = static_cast<int>(str[0]);
	else
		num = 
	// try
	// {
	// 	if (this->_str.length() == 1 && !isdigit(this->_str[0]))
	// 		this->_int = static_cast<int>(this->_str[0]);
	// 	else
	// 		this->_int = str_int(this->_str);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << "int: impossible" << std::endl;
	// 	return ;
	// }
	// std::cout << "int: " << this->_int << std::endl;
	// ------------------------------------------
	// std::size_t* idx = NULL;
	// int base = 10;
    // char* endptr = NULL;
    // const long long result = std::strtoll(str.c_str(), &endptr, base);
    // if (endptr == str.c_str()) {
    //     throw std::invalid_argument("stoi: no conversion");
    // }
    // if (idx != NULL) {
    //     *idx = static_cast<std::size_t>(endptr - str.c_str());
    // }
    // if (result < std::numeric_limits<int>::min() || result > std::numeric_limits<int>::max()) {
    //     throw std::out_of_range("stoi: out of range");
    // }
    // return static_cast<int>(result);
}

void	ScalarConverter::toFloat(std::string str)
{
	float num = 0;
	if (str.length() == 1 && !isdigit(str[0]))
		num = static_cast<float>(str[0]);
	else
		num = std::atof(str.c_str());
	if (num - static_cast<int>(num) == 0)
		std::cout << "float: " << num << ".0f" << std::endl;
	else
		std::cout << "float: " << num << "f" << std::endl;
}

void	ScalarConverter::toDouble(std::string str)
{
	double num = 0;
	if (str.length() == 1 && !isdigit(str[0]))
		num = static_cast<double>(str[0]);
	else
		num = std::atof(str.c_str());
	if (num - static_cast<int>(num) == 0)
		std::cout << "double: " << num << ".0" << std::endl;
	else
		std::cout << "double: " << num << std::endl;
}



void	ScalarConverter::convert(std::string str)
{
	// toChar(str);
	// toInt(str);
	toFloat(str);
	toDouble(str);
}
