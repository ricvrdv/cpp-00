/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: applecore <applecore@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 15:23:41 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/09 00:51:14 by applecore        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;


Account::Account( int initial_deposit )
{
	_displayTimestamp();

}

Account::Account( void )
{
    
}

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

void	Account::displayAccountsInfos( void )
{

}

void	Account::_displayTimestamp( void )
{

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
    
}

Account::~Account( void )
{

}