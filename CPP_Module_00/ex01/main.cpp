/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:26:29 by mkhan             #+#    #+#             */
/*   Updated: 2023/03/15 16:26:36 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int		main(void) {
	PhoneBook	phoneBook;
	std::string	input;
	Contact		contact;

	while (1) {
		std::cout << "+-------------------------------------------+" << std::endl;
		std::cout << "|        Commands: ADD, SEARCH, EXIT        |" << std::endl;
		std::cout << "+-------------------------------------------+" << std::endl;
		std::cout << "Enter a Command: ";
		if (!std::getline(std::cin, input))
			break ;
		if (input == "EXIT") {
			break ;
		} else if (input == "ADD") {
			contact.setFirstName();
			contact.setLastName();
			contact.setNickname();
			contact.setPhoneNumber();
			contact.setDarkestSecret();
			phoneBook.addContact(contact);
		} else if (input == "SEARCH") {
			phoneBook.searchContact();
		}
	}
	return (0);
}