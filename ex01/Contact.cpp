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

void	Contact::setFirstName(const std::string &str)
{
	_firstName = str;
}

void	Contact::setLastName(const std::string &str)
{
	_lastName = str;
}

void	Contact::setNickname(const std::string &str)
{
	_nickname = str;
}

void	Contact::setPhoneNumber(const std::string &str)
{
	_phoneNumber = str;
}

void	Contact::setDarkestSecret(const std::string &str)
{
	_darkestSecret = str;
}

// GETTERS:

std::string	Contact::getFirstName()
{
	return (_firstName);
}

std::string	Contact::getLastName()
{
	return (_lastName);
}

std::string	Contact::getNickname()
{
	return (_nickname);
}

std::string	Contact::getPhoneNumber()
{
	return (_phoneNumber);
}

std::string	Contact::getDarkestSecret()
{
	return (_darkestSecret);
}
