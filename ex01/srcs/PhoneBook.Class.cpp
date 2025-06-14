/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:59:51 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/06/14 23:21:07 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.Class.hpp"
#include "PhoneBook.Class.hpp"
#include "utils.hpp"

PhoneBook::PhoneBook(void) : _nextContact(0){
}

PhoneBook::~PhoneBook(void){
}

void	PhoneBook::printContactinfo(int idx) const
{
	if (_contacts[idx].isActive())
	{
		std::cout << "\nFirst name: " << _contacts[idx].getContactInfo(0) << '\n';
		std::cout << "Last name: " << _contacts[idx].getContactInfo(1) << '\n';
		std::cout << "Nickname: " << _contacts[idx].getContactInfo(2) << '\n';
		std::cout << "Phone number: " << _contacts[idx].getContactInfo(3) << '\n';
		std::cout << "Darkest secret: " << _contacts[idx].getContactInfo(4) << "\n\n";
	}
	else
	{
		std::cout << "You’ve reached no one... an empty vessel...\n";
		std::cout << "Where do you wanna go with your life...\n\n";
	}
}

void	PhoneBook::search() const
{
	const int	CAPACITY = sizeof(_contacts) / sizeof(_contacts[0]);
	bool		emptyPhoneBook = true ;
	
	std::cout << "\n+----------+----------+----------+----------+\n";
	std::cout << "|       IDX|      NAME|   SURNAME|  NICKNAME|\n";
	std::cout << "+----------+----------+----------+----------+\n";
	for (int i = 0; i < CAPACITY; ++i)
	{
		if (_contacts[i].isActive())
		{
			emptyPhoneBook = false;
			std::cout << "|         "<< i + 1 << "|";
			printField(_contacts[i].getContactInfo(0), '|');
			printField(_contacts[i].getContactInfo(1), '|');
			printField(_contacts[i].getContactInfo(2), '|');
			std::cout << '\n';
		}
	}
	if (emptyPhoneBook)
		std::cout << "! There's no life in here...                |\n";
	std::cout << "+----------+----------+----------+----------+\n\n";
	if (!emptyPhoneBook)
		printContactinfo(getIdx() - 1);
}

void	PhoneBook::addContact(){

	this->_contacts[_nextContact].setContact();
	this->_nextContact = (_nextContact + 1) % 8;
}
