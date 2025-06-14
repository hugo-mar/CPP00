/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:59:15 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/06/14 20:50:24 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.Class.hpp"
#include "PhoneBook.Class.hpp"
#include "utils.hpp"

int main()
{
	PhoneBook	pb;
	std::string	command {};
	
	setlocale(LC_CTYPE, "");

	std::cout << "\nWelcome to the crappy awesome phonebook!\n";
	std::cout << "The deal is contacts.\n\n";

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
			std::cout << "\nThat ain't happening. ";
	}

	std::cout << "Hope it was as good for you as it was for me.\n\n";
	return 0;
}
