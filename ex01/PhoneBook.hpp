/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: applecore <applecore@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 18:36:27 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/08 00:36:41 by applecore        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <sstream>
# include <iomanip>
# include "Contact.hpp"
# include "utils.hpp"
# include "colors.hpp"

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
