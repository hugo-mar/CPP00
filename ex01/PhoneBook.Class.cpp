#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.Class.hpp"
#include "PhoneBook.Class.hpp"

PhoneBook::PhoneBook(void) : _nextContact{0}{
}

PhoneBook::~PhoneBook(void){
}

void	printField(std::string field, char lastChar)
{
	std::string display;
	
	if (field.length() >= 10)
		display = field.substr(0, 9) + '.';
	else
		display = field;

	std::cout << std::right << std::setw(10) << display << lastChar;
}

// void	PhoneBook::search() const{

// 	std::cout << "Next contact: "<< this->_nextContact << '\n';
// 	for (int i{}; i < this->_nextContact; i++)
// 	{
// 		printField(this->_contacts[i].getContactInfo(0), '|');
// 		printField(this->_contacts[i].getContactInfo(1), '|');
// 		printField(this->_contacts[i].getContactInfo(2), '|');
// 		printField(this->_contacts[i].getContactInfo(3), '!');
// 		printField(this->_contacts[i].getContactInfo(4), '\n');
		
// 	}
// }

void	PhoneBook::search() const
{
	const int CAPACITY = sizeof(_contacts) / sizeof(_contacts[0]);
	
	std::cout << "Next contact: "<< this->_nextContact << '\n';
	for (int i = 0; i < CAPACITY; ++i)
	{
		if (_contacts[i].isActive())
		{
			printField(_contacts[i].getContactInfo(0), '|');
			printField(_contacts[i].getContactInfo(1), '|');
			printField(_contacts[i].getContactInfo(2), '|');
			printField(_contacts[i].getContactInfo(3), '!');
			printField(_contacts[i].getContactInfo(4), '\n');
		}
		
	}
}

void	PhoneBook::addContact(){

	this->_contacts[_nextContact].setContact();
	this->_nextContact = (_nextContact + 1) % 8;
}
