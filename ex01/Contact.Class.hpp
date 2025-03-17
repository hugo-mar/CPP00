#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>

class Contact {

private:

	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;

public:

	Contact	(void);
	~Contact (void);

	void	setContact(void);
	void	getContactInfo(std::string &info) const;

};

#endif
