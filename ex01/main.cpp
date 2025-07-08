/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: applecore <applecore@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 19:06:16 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/07 23:26:52 by applecore        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	book;
	std::string	command;

	handle_signal();
	std::cout << CLEAR;
	while (true)
	{
		std::cout << BOLD << "Enter command (ADD, SEARCH, EXIT): " << RESET;
		std::getline(std::cin, command);
		if (std::cin.eof())
		{
			std::cout << RED << "Input aborted. EOF received" << RESET << std::endl;
			break;
		}
		else if (std::cin.fail())
		{
			std::cout << RED << "Invalid input" << RESET << std::endl;
			std::cin.clear();
			continue ;
		}
		else if (command == "ADD")
			book.add_contact();
		else if (command == "SEARCH")
			book.search_contacts();
		else if (command == "EXIT")
			break;
		else
			std::cout << RED << "Invalid input" << RESET << std::endl;
	}
	return (0);
}
