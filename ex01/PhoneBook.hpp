/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 15:26:19 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/08 15:26:22 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <sstream>
# include <iomanip>
# include <cstdlib>
# include "Contact.hpp"
# include "utils.hpp"
# include "colors.hpp"

class PhoneBook
{
	private:
		Contact _contacts[8];
		int		_contact_count;
	public:
		PhoneBook(void);
		void	addContact();
		void	searchContacts();
		void	displayContact(int index);
};

#endif
