/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaneski <ttaneski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:49:17 by ttaneski          #+#    #+#             */
/*   Updated: 2023/12/14 15:17:14 by ttaneski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
# include <iomanip>
# include <iostream>

/* static int intgetNbAccounts(void)
{
	std::cout << "getNbAccounts" << std::endl;
	return (0);
}
static int	getTotalAmount(void)
{
	std::cout << "getTotalAmount" << std::endl;
	return (0);	
}
static int	getNbDeposits(void)
{
	std::cout << "getNbDeposits" << std::endl;
	return (0);
}
static int	getNbWithdrawals(void)
{
	std::cout << "getNbWithdrawals" << std::endl;
	return (0);

} */
/* static void	displayAccountsInfos(void)
{
	std::cout << "displayAccountsInfos" << std::endl;

} */

Account::Account(int initial_deposit)
{	
	std::cout << initial_deposit << std::endl;
}
Account::~Account(void)
{
	std::cout << "destroy" << std::endl;
}

void			Account::makeDeposit(int deposit)
{
	std::cout << deposit << std::endl;

}
bool			Account::makeWithdrawal(int withdrawal)
{
	std::cout << withdrawal << std::endl;
	return (true);

}
int				Account::checkAmount(void) const
{
	std::cout << "checkAmount" << std::endl;
	return (0);
}
void			Account::displayStatus(void) const
{
	std::cout << "displayStatus" << std::endl;

}
