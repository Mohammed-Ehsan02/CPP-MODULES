/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:20:39 by mkhan             #+#    #+#             */
/*   Updated: 2023/03/15 17:01:01 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	this->_index = 0;
	this->_maxIndex = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

void	PhoneBook::addContact(Contact contact) {
	this->_contacts[this->_index] = contact;
	std::cout << "Contact added successfully!" << std::endl << std::endl;
	this->_index++;
	this->_maxIndex++;
	if (this->_index == 8) {
		this->_index = 0;
	}
	if (this->_maxIndex > 8) {
		this->_maxIndex = 8;
	}
}

void	PhoneBook::printContacts(void) {
	int i = 0;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|   Index  |First Name| Last Name| Nickname |" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	while (i < this->_maxIndex) {
		std::cout << "|         " << i + 1 << "|";
		if (this->_contacts[i].getFirstName().length() > 10) {
			std::cout << this->_contacts[i].getFirstName().substr(0, 9) << ".";
		} else {
			std::cout << std::setw(10) << this->_contacts[i].getFirstName();
		}
		std::cout << "|";
		if (this->_contacts[i].getLastName().length() > 10) {
			std::cout << this->_contacts[i].getLastName().substr(0, 9) << ".";
		} else {
			std::cout << std::setw(10) << this->_contacts[i].getLastName();
		}
		std::cout << "|";
		if (this->_contacts[i].getNickname().length() > 10) {
			std::cout << this->_contacts[i].getNickname().substr(0, 9) << ".";
		} else {
			std::cout << std::setw(10) << this->_contacts[i].getNickname();
		}
		std::cout << "|" << std::endl;
		std::cout << "+----------+----------+----------+----------+" << std::endl;
		i++;
	}
}


void	PhoneBook::searchContact(void) {
	std::string index;

	PhoneBook::printContacts();
	std::cout << "Enter the index of the contact you want to view: ";
	if (!std::getline(std::cin, index))
		return ;
	while (1) {
		if (index.length() == 1 && index[0] >= '1' && index[0] <= '8') {
			if (index[0] - '0' <= this->_maxIndex) {
			this->_contacts[index[0] - '1'].printContact();
			break ;
			} else {
			std::cout << "Contact does not exist!" << std::endl << std::endl;
			break ;
			}
		} else {
			std::cout << "Invalid index!" << std::endl << std::endl;
			break ;
		}
	}
}