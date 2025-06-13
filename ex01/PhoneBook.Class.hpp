#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <string>
#include "Contact.Class.hpp"

class PhoneBook {

private:

	Contact _contacts[8];
	int		_nextContact;

public:

	PhoneBook(void);
	~PhoneBook(void);

	void	search() const;
	void	addContact();

};

#endif
