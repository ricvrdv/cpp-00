/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 15:26:47 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/08 15:26:49 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# define CLEAR  "\033[2J\033[H"

# include <csignal>
# include "PhoneBook.hpp"

void        handle_signal(void);
bool        is_digits_only(const std::string &str);
std::string	handle_input(const std::string &prompt);
std::string format_data(std::string str);
void        intro_display(void);

#endif
