/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:07:06 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/09 15:07:08 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _contact_count(0) {}

void	PhoneBook::addContact()
{
    Contact     new_contact;
	std::string	phone_nr;

	new_contact.setFirstName(handle_input("First name: "));
	new_contact.setLastName(handle_input("Last name: "));
	new_contact.setNickname(handle_input("Nickname: "));
	do
	{
		phone_nr = handle_input("Phone number: ");
		if (!is_digits_only(phone_nr))
			std::cout << RED << "Phone number must contain digits only." << RESET << std::endl;
	} while (!is_digits_only(phone_nr));
	new_contact.setPhoneNumber(phone_nr);
	new_contact.setDarkestSecret(handle_input("Darkest secret: "));
	_contacts[_contact_count % 8] = new_contact;
	_contact_count++;
	std::cout << GREEN << "\n\tContact added\n" << RESET << std::endl;
}

void	PhoneBook::searchContacts()
{
	std::string	input;
	int			index = 0;

	if (_contacts[0].getFirstName().length() == 0)
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
			<< "|" << format_data(_contacts[i].getFirstName())
			<< "|" << format_data(_contacts[i].getLastName())
			<< "|" << format_data(_contacts[i].getNickname())
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
				displayContact(index);
				break ;
			}
		}
		std::cout << RED <<"Invalid index, choose between 0 and 7" << RESET << std::endl;
	}
}

void	PhoneBook::displayContact(int index)
{
	Contact &c = _contacts[index];

	std::cout << std::endl;
	std::cout << "/-------------------------------------------\\" << std::endl;
	std::cout << "| Contact found:                            |" << std::endl;
	std::cout << "\\-------------------------------------------/" << std::endl;
	std::cout << "First name: " << c.getFirstName() << std::endl;
	std::cout << "Last name: " << c.getLastName() << std::endl;
	std::cout << "Nickname: " << c.getNickname() << std::endl;
	std::cout << "Phone number: " << c.getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << c.getDarkestSecret() << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::endl;
}
