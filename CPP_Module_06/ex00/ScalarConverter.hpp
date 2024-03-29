/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:14:52 by mkhan             #+#    #+#             */
/*   Updated: 2023/05/24 13:55:39 by mkhan            ###   ########.fr       */
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
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &object);
		ScalarConverter &operator=(ScalarConverter const &rhs);
		
	public:
		~ScalarConverter();
		static void	convert(std::string str);
		static void	toChar(std::string str);
		static void	toInt(std::string str);
		static void	toFloat(std::string str);
		static void	toDouble(std::string str);
};

#endif