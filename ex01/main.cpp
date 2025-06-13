#include "Contact.Class.hpp"
#include "PhoneBook.Class.hpp"

#include <iostream>
#include <string>

#include <limits>


void	ignoreLine();


int main()
{
	PhoneBook pb;
	std::string	command {};

	std::cout << "Welcome to the crappy awesome phonebook!\n";
	std::cout << "The deal is contacts.\n";

	while (true)
	{
		std::cout << "What do you wanna do? (ADD, SEARCH or EXIT)\n> ";
		std::cin >> command;
		ignoreLine();
		if (command == "ADD" || command == "add")
			pb.addContact();
		else if (command == "SEARCH" || command == "search")
			pb.search();
		else if (command == "EXIT" || command == "exit")
			break ;
		else
			std::cout << "That ain't happening. ";
	}

	return 0;

}



// #include <algorithm>
// #include <cctype>
// #include <string>

// char toUpperChar(unsigned char c) {
//     return std::toupper(c);
// }

// std::string str = "example";
// std::transform(str.begin(), str.end(), str.begin(), toUpperChar);