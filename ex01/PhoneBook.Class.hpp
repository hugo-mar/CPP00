#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <string>
#include "Contact.Class.hpp"

class PhoneBook {

private:
	Contact _contacts[8];

public:
	PhoneBook(void);
	~PhoneBook(void);

	void	Search(void) const;

};

#endif
