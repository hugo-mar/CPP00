/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:00:01 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/06/15 14:26:16 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.Class.hpp"

class PhoneBook {

private:

	Contact _contacts[8];
	int		_nextContact;

public:

	PhoneBook(void);
	~PhoneBook(void);

	void	printContactinfo(int idx) const;
	void	search() const;
	void	addContact();

};

#endif
