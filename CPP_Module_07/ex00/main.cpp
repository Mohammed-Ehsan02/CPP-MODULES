/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:04:16 by mkhan             #+#    #+#             */
/*   Updated: 2023/02/06 10:26:59 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void )
{
	int a = 2;
	int b = 3;
	
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	::swap( a, b );
	std::cout << "After awap: a = " << a << ", b = " << b << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "Before swap: c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::cout << "After swap: c = " << c << ", d = " << d << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	return 0;
}