/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: applecore <applecore@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 15:19:30 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/08 01:31:30 by applecore        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contact_count(0) {}

void	PhoneBook::add_contact()
{
    Contact     new_contact;
	std::string	phone_nr;

	new_contact.set_first_name(handle_input("First name: "));
	new_contact.set_last_name(handle_input("Last name: "));
	new_contact.set_nickname(handle_input("Nickname: "));
	do
	{
		phone_nr = handle_input("Phone number: ");
		if (!is_digits_only(phone_nr))
			std::cout << RED << "Phone number must contain digits only." << RESET << std::endl;
	} while (!is_digits_only(phone_nr));
	new_contact.set_phone_number(phone_nr);
	new_contact.set_darkest_secret(handle_input("Darkest secret: "));
	contacts[contact_count % 8] = new_contact;
	contact_count++;
	std::cout << GREEN << "\n\tContact added\n" << RESET << std::endl;
}

void	PhoneBook::search_contacts()
{
	std::string	input;
	int			index = 0;

	if (contacts[0].get_first_name().length() == 0)
	{
		std::cout << "/-------------------------------------------\\" << std::endl;
		std::cout << "|                                           |" << std::endl;
		std::cout << "|            No contacts found!             |" << std::endl;
		std::cout << "|                                           |" << std::endl;
		std::cout << "\\-------------------------------------------/" << std::endl;
		std::cout << std::endl;
		return ;
	}
	std::cout << "/-------------------------------------------\\" << std::endl;
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	std::cout << "|----------+----------+----------+----------|" << std::endl;
	for (size_t i = 0; i < 8; i++)
	{
		std::cout << "|" << std::setw(10) << i
			<< "|" << format_data(contacts[i].get_first_name())
			<< "|" << format_data(contacts[i].get_last_name())
			<< "|" << format_data(contacts[i].get_nickname())
			<< "|" << std::endl;
	}
	std::cout << "\\-------------------------------------------/" << std::endl;
	while (true)
	{
		input = handle_input("Choose index of the entry to display: ");
		if (is_digits_only(input))
		{
			std::stringstream(input) >> index;
			if (index >= 0 && index < 8)
			{
				display_contact(index);
				break ;
			}
		}
		std::cout << RED <<"Invalid index, choose between 0 and 7" << RESET << std::endl;
	}
}

void	PhoneBook::display_contact(int index)
{
	Contact &c = contacts[index];

	std::cout << std::endl;
	std::cout << "/-------------------------------------------\\" << std::endl;
	std::cout << "| Contact found:                            |" << std::endl;
	std::cout << "\\-------------------------------------------/" << std::endl;
	std::cout << "First Name: " << c.get_first_name() << std::endl;
	std::cout << "Last Name: " << c.get_last_name() << std::endl;
	std::cout << "Nickname: " << c.get_nickname() << std::endl;
	std::cout << "Phone number: " << c.get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << c.get_darkest_secret() << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::endl;
}
