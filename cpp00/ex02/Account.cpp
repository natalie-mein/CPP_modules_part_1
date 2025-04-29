/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:32:20 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/05 13:32:22 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

//private methods
void	Account::_displayTimestamp()
{
    char    time_now[20];
    std::time_t t;
    
    std::time(&t);
    std::strftime(time_now, sizeof(time_now), "%Y%m%d_%H%M%S", std::localtime(&t));
    std::cout << "[" << time_now << "]";
}
Account::Account( void ) {}

// constructor
Account::Account(int initial_deposit) 
:   _accountIndex(_nbAccounts),
    _amount(initial_deposit),
    _nbDeposits(0),
    _nbWithdrawals(0)
{
    _displayTimestamp();

    std::cout << " index:" << _accountIndex
              << ";amount:" << _amount 
              << ";created" << std::endl;
            
    _nbAccounts++;
    _totalAmount += _amount;
}

//destructor
Account::~Account() 
{
    _displayTimestamp();

    std::cout << " index:" << _accountIndex
              << ";amount:" << _amount
              << ";closed" << std::endl;
} 

//public methods
int	Account::getNbAccounts( void ) {
    return _nbAccounts;
}

int	Account::getTotalAmount( void ) {
    return _totalAmount;
}

int	Account::getNbDeposits( void ) {
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
    return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos() 
{
    _displayTimestamp();

    std::cout << " accounts:" << _nbAccounts
              << ";total:" << _totalAmount
              << ";deposits:" << _totalNbDeposits
              << ";withdrawals:" << _totalNbWithdrawals
              << std::endl;  
}

void	Account::makeDeposit( int deposit ) 
{
    _displayTimestamp();

    std::cout << " index:" << _accountIndex
              << ";p_amount:" << _amount // previous balance
              << ";deposit:" << deposit;

    _amount += deposit;
    _nbDeposits++; //increase deposit count
    _totalAmount += deposit;
    _totalNbDeposits++;

    std::cout << ";amount:" << _amount
              << ";nb_deposits:" << _nbDeposits
              << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) 
{
    _displayTimestamp();

    std::cout << " index:" << _accountIndex
              << ";p_amount:" << _amount // previous balance
              << ";withdrawal:";
    if (withdrawal < _amount)
        std::cout << withdrawal;

    if (withdrawal > _amount) {
        std::cout << "refused" <<std::endl;
        return false;
    }
    _amount -= withdrawal;
    _nbWithdrawals++; //increase deposit count
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;

    std::cout << ";amount:" << _amount
              << ";nb_withdrawals:" << _nbWithdrawals
              << std::endl;
    
    return true;
}

int		Account::checkAmount( void ) const {
    return _amount;
}

void	Account::displayStatus( void ) const 
{
    _displayTimestamp();

    std::cout << " index:" <<_accountIndex
              << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals
              << std::endl;
}
