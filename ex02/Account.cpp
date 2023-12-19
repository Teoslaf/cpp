/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaneski <ttaneski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:49:17 by ttaneski          #+#    #+#             */
/*   Updated: 2023/12/19 11:24:10 by ttaneski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <chrono>
#include <ctime>
#include <iomanip>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	_nbDeposits = 0; 
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "created" << std::endl;
	_nbAccounts++;
	Account::_totalAmount += _amount;
}

void Account::_displayTimestamp(void)
{
	time_t		now;
	struct tm	tstruct;
	char		buf[80];

	now = time(0);
	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S", &tstruct);
	std::cout << "[" << buf << "]";
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "deposits:" << _nbDeposits << ";"
				<< "withdrawals:" << _nbWithdrawals << std::endl;
}
void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	if (deposit > 0)
	{
		_nbDeposits++;
		std::cout << " index:" << _accountIndex << ";"
					<< "p_amount:" << _amount << ";"
					<< "deposit:" << deposit << ";";
		_amount += deposit;
		std::cout << "amount:" << _amount << ";"
					<< "nb_deposits:" << _nbDeposits << std::endl;
		_totalAmount += deposit;
		_totalNbDeposits++;
	}
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (_amount >= withdrawal)
	{
		_nbWithdrawals++;
		std::cout << " index:" << _accountIndex << ";"
					<< "p_amount:" << _amount << ";"
					<< "withdrawal:" << withdrawal << ";";
		_amount -= withdrawal;
		std::cout << "amount:" << _amount << ";" 
				  << "nb_withdrawals:" << _nbWithdrawals << std::endl;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		return (true);
	}
	else
	{
		std::cout << " index:" << _accountIndex << ";"
					<< "p_amount:" << _amount << ";"
					<< "withdrawal:refused" << std::endl;
		return (false);
	}
}
void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";"
				<< "total:" << _totalAmount << ";"
				<< "deposits:" << _totalNbDeposits << ";"
				<< "withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "closed" << std::endl;
	_nbAccounts--;
	_totalAmount -= _amount;
}