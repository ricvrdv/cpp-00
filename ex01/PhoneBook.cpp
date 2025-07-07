/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 15:19:30 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/07 15:27:06 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contact_count(0) {}

static std::string	handle_input(const std::string &prompt)
{
	std::string	input;
	while (true)
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "Input aborted. EOF received.\n";
			std::cin.clear();
			exit(EXIT_FAILURE);
		}
		else if (std::cin.fail())
		{
			std::cout << "Input failed. Please try again.\n";
			std::cin.clear();
			continue;
		}
		else if (!input.empty())
			return (input);
		std::cout << "Field cannot be empty.\n";
	}
}

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
			std::cout << "Phone number must contain digits only.\n";
	} while (!is_digits_only(phone_nr));
	new_contact.set_phone_number(phone_nr);
	new_contact.set_darkest_secret(handle_input("Darkest secret: "));
	contacts[contact_count % 8] = new_contact;
	contact_count++;
}

void	PhoneBook::search_contacts()
{
	std::string	input;
	int			index = 0;

	input = handle_input("Index of the contact: ");
	std::stringstream(input) >> index;
	display_contact(index);
}

void	PhoneBook::display_contact(int index)
{
	Contact &c = contacts[index];

	std::cout << "First Name: " << c.get_first_name() << std::endl;
	std::cout << "Last Name: " << c.get_last_name() << std::endl;
	std::cout << "Nickname: " << c.get_nickname() << std::endl;
	std::cout << "Phone number: " << c.get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << c.get_darkest_secret() << std::endl;
}
