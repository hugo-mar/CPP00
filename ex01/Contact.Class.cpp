#include <iostream>
#include <string>
#include <limits>
#include "Contact.Class.hpp"

Contact::Contact(void) : _isActive(false) {
}

Contact::~Contact(void){
}

void	ignoreLine()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void	Contact::setContact(void)
{
	std::cout << "First name: ";
	std::cin >> this->_firstName;
	ignoreLine();

	std::cout << "Last name: ";
	std::cin >> this->_lastName;
	ignoreLine();

	std::cout << "Nickname: ";
	std::cin >> this->_nickname;
	ignoreLine();

	std::cout << "Phone number: ";
	std::cin >> this->_phoneNumber;
	ignoreLine();

	std::cout << "Darkest secret: ";
	std::cin >> this->_darkestSecret;
	ignoreLine();

	this->_isActive = true;
}

std::string	Contact::getContactInfo(int info) const{

	switch (info)
	{
	case 0:
		return this->_firstName;
	case 1:
		return this->_lastName;
	case 2:
		return this->_nickname;
	case 3:
		return this->_phoneNumber;
	case 4:
		return this->_darkestSecret;
	default:
		return "ERROR";
	}
}

bool	Contact::isActive() const
{
	return	this->_isActive;
}
