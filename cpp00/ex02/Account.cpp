#include "Account.hpp"
#include <iostream>

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " accounts:" << Account::getNbAccounts()
		<< ";total:" << Account::getTotalAmount()
		<< ";desposits:" << Account::getNbDeposits()
		<< ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

Account::Account(int initial_desposit)
{
	_displayTimestamp();
}

Account::~Account(void)
{
	_displayTimestamp();
}

void	Account::makeDeposit(int deposit)
{
	Account::_amount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > _amount)
		return (1);
	_amount -= withdrawal;
	return (0);
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
		<< ";total:" << _amount
		<< ";desposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals << std::endl;
}