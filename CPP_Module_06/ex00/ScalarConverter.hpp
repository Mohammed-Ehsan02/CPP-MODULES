/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:14:52 by mkhan             #+#    #+#             */
/*   Updated: 2023/02/15 19:06:03 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <ctype.h>
#include <cstdlib>

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &object);
		ScalarConverter &operator=(ScalarConverter const &rhs);
		~ScalarConverter();
		
		static void	convert(std::string str);
		static void	toChar(std::string str);
		static void	toInt(std::string str);
		static void	toFloat(std::string str);
		static void	toDouble(std::string str);
};

#endif