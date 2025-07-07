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

void	PhoneBook::add_contact()
{
    Contact     new_contact;
    std::string input;

    do
    {
        std::cout << "First name: ";
        std::getline(std::cin, input);
    } while (input.empty());
    new_contact.set_first_name(input);
    do
    {
        std::cout << "Last name: ";
        std::getline(std::cin, input);
    } while (input.empty());
    new_contact.set_last_name(input);
    do
    {
        std::cout << "Nickname: ";
        std::getline(std::cin, input);
    } while (input.empty());
    new_contact.set_nickname(input);
    do
    {
        std::cout << "Phone number: ";
        std::getline(std::cin, input);
    } while (input.empty());
    new_contact.set_phone_number(input);
	do
	{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, input);
	} while (input.empty());
	new_contact.set_darkest_secret(input);
	
	contacts[contact_count % 8] = new_contact;
	contact_count++;
}

void	PhoneBook::search_contacts()
{}

void	PhoneBook::display_contact(int index)
{}
