/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 18:36:27 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/04 18:59:50 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <sstream>
# include "Contact.hpp"
# include "utils.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int	contact_count;
	public:
		PhoneBook(void);
		void	add_contact();
		void	search_contacts();
		void	display_contact(int index);
};

#endif
