/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:05:30 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/09 15:05:34 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

// CONSTRUCTORS

Account::Account( void ) {}

Account::Account( int initial_deposit ) :
	_accountIndex(_nbAccounts),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";created" << std::endl;
}

// GETTERS (STATIC MEMBER FUNCTIONS)

int		Account::getNbAccounts( void )
{
    return (_nbAccounts);
}

int		Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int		Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int		Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

// OTHER MEMBER FUNCTIONS

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts
		<< ";total:" << _totalAmount
		<< ";deposits:" << _totalNbDeposits
		<< ";withdrawals:" << _totalNbWithdrawals
		<< std::endl;
}

void	Account::_displayTimestamp( void )
{
    std::time_t now = std::time(nullptr);
    std::tm     *lt = std::localtime(&now);

    std::cout << '[' << (lt->tm_year + 1900)
        << std::setw(2) << std::setfill('0') << lt->tm_mon + 1
        << std::setw(2) << std::setfill('0') << lt->tm_mday
        << '_'
        << std::setw(2) << std::setfill('0') << lt->tm_hour
        << std::setw(2) << std::setfill('0') << lt->tm_min
        << std::setw(2) << std::setfill('0') << lt->tm_sec
        << ']';
}

void	Account::makeDeposit( int deposit )
{

}

bool	Account::makeWithdrawal( int withdrawal )
{

}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals
		<< std::endl;
}

// DESTRUCTOR

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";closed" << std::endl;
}
