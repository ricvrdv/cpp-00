/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 14:51:51 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/07 15:06:30 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// SETTERS:

void	Contact::set_first_name(const std::string &str)
{
	first_name = str;
}

void	Contact::set_last_name(const std::string &str)
{
	last_name = str;
}

void	Contact::set_nickname(const std::string &str)
{
	nickname = str;
}

void	Contact::set_phone_number(const std::string &str)
{
	phone_number = str;
}

void	Contact::set_darkest_secret(const std::string &str)
{
	darkest_secret = str;
}

// GETTERS:

std::string	Contact::get_first_name()
{
	return (first_name);
}

std::string	Contact::get_last_name()
{
	return (last_name);
}

std::string	Contact::get_nickname()
{
	return (nickname);
}

std::string	Contact::get_phone_number()
{
	return (phone_number);
}

std::string	Contact::get_darkest_secret()
{
	return (darkest_secret);
}
