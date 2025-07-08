/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 15:26:32 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/08 15:26:35 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

void	handle_signal(void)
{
	signal(SIGINT, SIG_IGN);
	signal(SIGQUIT, SIG_IGN);
}

bool	is_digits_only(const std::string &str)
{
	for (size_t i = 0; i < str.length(); i ++)
	{
		if (!std::isdigit(str[i]))
			return (false);
	}
	return (true);
}

std::string	handle_input(const std::string &prompt)
{
	std::string	input;
	while (true)
	{
		std::cout << BOLD << prompt << RESET;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << RED << "Input aborted. EOF received" << RESET << std::endl;
			std::cin.clear();
			exit(EXIT_FAILURE);
		}
		else if (std::cin.fail())
		{
			std::cout << RED << "Input failed. Please try again." << RESET << std::endl;
			std::cin.clear();
			continue;
		}
		else if (!input.empty())
			return (input);
		std::cout << RED << "Field cannot be empty." << RESET << std::endl;
	}
}

std::string	format_data(std::string str)
{
	std::ostringstream	formatted;

	if (str.length() > 10)
		return (str.substr(0, 9) + '.');
	formatted << std::right << std::setfill(' ') << std::setw(10) << str;
	return (formatted.str());
}

void	intro_display(void)
{
	std::cout << "/===========================================\\" << std::endl;
	std::cout << "|                PHONEBOOK                  |" << std::endl;
	std::cout << "|===========================================|" << std::endl;
	std::cout << "|  ADD    - to add contact                  |" << std::endl;
	std::cout << "|  SEARCH - to search contact               |" << std::endl;
	std::cout << "|  EXIT   - to quit                         |" << std::endl;
	std::cout << "\\===========================================/" << std::endl;
	std::cout << std::endl;
}
