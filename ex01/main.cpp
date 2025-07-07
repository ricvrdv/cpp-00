/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 19:06:16 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/04 19:23:11 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	book;
	std::string	command;

	handle_signal();
	while (true)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		if (std::cin.eof())
		{
			std::cout << "EOF reached (Ctrl+D pressed)\n";
			break ;
		}
		else if (std::cin.fail())
		{
			std::cout << "Invalid input\n";
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
			std::cout << "Invalid input\n";
	}
	return (0);
}
