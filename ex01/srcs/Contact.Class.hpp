/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:00:15 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/06/15 14:26:06 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

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
