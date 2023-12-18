/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaneski <ttaneski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:49:17 by ttaneski          #+#    #+#             */
/*   Updated: 2023/12/18 17:08:23 by ttaneski         ###   ########.fr       */
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
	_displayTimestamp();
	std::cout << " index:"
				<< "\033[1;36m" << _accountIndex << "\033[1;37m"
				<< ";"
				<< "amount:"
				<< "\033[1;36m" << _amount << "\033[1;37m"
				<< ";"
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

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << " accounts:"
				<< "\033[1;36m" << _nbAccounts << "\033[1;37m"
				<< ";"
				<< "total:"
				<< "\033[1;36m" << _totalAmount << "\033[1;37m"
				<< ";"
				<< "deposits:"
				<< "\033[1;36m" << _totalNbDeposits << "\033[1;37m"
				<< ";"
				<< "withdrawals:"
				<< "\033[1;36m" << _totalNbWithdrawals << "\033[1;37m" << std::endl;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:"
				<< "\033[1;36m" << _accountIndex << "\033[1;37m"
				<< ";"
				<< "amount:"
				<< "\033[1;36m" << _amount << "\033[1;37m"
				<< ";"
				<< "deposits:"
				<< "\033[1;37m" << _totalNbDeposits << "\033[1;37m"
				<< ";"
				<< "withdrawals:"
				<< "\033[1;37m" << _totalNbWithdrawals << "\033[1;37m" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << " index:"
				<< "\033[1;36m" << _accountIndex << "\033[1;37m"
				<< ";"
				<< "p_amount:"
				<< "\033[1;36m" << _amount << "\033[1;37m"
				<< ";"
				<< "deposits:"
				<< "\033[1;36m" << deposit << "\033[1;37m"
				<< ";"
				<< "withdrawals:"
				<< "\033[1;36m" << _nbWithdrawals << "\033[1;37m" << "nb_deposit " << _nbDeposits << std::endl;
	_nbDeposits += deposit;
	_totalNbDeposits += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "deposits:" << _nbDeposits << ";"
				<< "withdrawals:" << withdrawal << std::endl;
	_nbWithdrawals += withdrawal;
	_totalNbWithdrawals += withdrawal;
	return (true);
}

Account::~Account()
{
	_accountIndex = _nbAccounts;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "closed" << std::endl;
	_nbAccounts++;
}