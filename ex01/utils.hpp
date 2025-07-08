/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: applecore <applecore@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 16:04:43 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/08 01:04:11 by applecore        ###   ########.fr       */
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

#endif