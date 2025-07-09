/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 15:25:42 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/08 15:25:44 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	book;
	std::string	command;

	handle_signal();
	std::cout << CLEAR;
	intro_display();
	while (true)
	{
		std::cout << BOLD << "Enter command (ADD, SEARCH, EXIT): " << RESET;
		std::getline(std::cin, command);
		if (std::cin.eof())
		{
			std::cout << RED << "Input aborted. EOF received" << RESET << std::endl;
			return (1);
		}
		else if (std::cin.fail())
		{
			std::cout << RED << "Invalid input" << RESET << std::endl;
			std::cin.clear();
			continue ;
		}
		else if (command == "ADD")
			book.addContact();
		else if (command == "SEARCH")
			book.searchContacts();
		else if (command == "EXIT")
			break ;
		else
			std::cout << RED << "Invalid input" << RESET << std::endl;
	}
	std::cout << YELLOW <<"\n\tSee you next time" << RESET << std::endl << std::endl;
	return (0);
}
