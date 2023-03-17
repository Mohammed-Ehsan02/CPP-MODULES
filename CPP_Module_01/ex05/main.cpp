/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:26:28 by mkhan             #+#    #+#             */
/*   Updated: 2023/03/17 16:26:28 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl Person;

	Person.complain("DEBUG");
	Person.complain("INFO");
	Person.complain("WARNING");
	Person.complain("ERROR");
}