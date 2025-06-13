#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>

class Contact {

private:

	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
	bool		_isActive;

public:

	Contact	(void);
	~Contact (void);

	void		setContact(void);
	std::string	getContactInfo(int field) const;
	bool		isActive(void) const;

};

#endif
