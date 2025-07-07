/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 16:01:23 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/07 16:02:38 by rjesus-d         ###   ########.fr       */
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
