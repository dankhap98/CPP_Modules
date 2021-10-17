#include "Account.hpp"
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int init)
{
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = init;
	Account::_totalAmount += init;
	Account::_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";";
	std::cout<<"amount:"<<init<<";";
	std::cout<<"created"<<std::endl;
}

Account::Account()
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";";
	std::cout<<"amount:0;";
	std::cout<<"created"<<std::endl;
}

Account::~Account()
{
	this->_nbAccounts--;
	Account::_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";";
	std::cout<<"amount:"<<this->_amount<<";";
	std::cout<<"closed"<<std::endl;
}

int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout<<"accounts:"<<Account::_nbAccounts<<";";
	std::cout<<"total:"<<Account::_totalAmount<<";";
	std::cout<<"deposits:"<<Account::_totalNbDeposits<<";";
	std::cout<<"withdrawals:"<<Account::_totalNbWithdrawals<<std::endl;
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";";
	std::cout<<"amount:"<<this->_amount<<";";
	std::cout<<"deposits:"<<this->_nbDeposits<<";";
	std::cout<<"withdrawals:"<<this->_nbWithdrawals<<std::endl;
}

int Account::checkAmount(void) const
{
	return (this->_amount > 0);
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";";
	std::cout<<"p_amount:"<<this->_amount<<";";
	std::cout<<"deposit"<<deposit<<";";
	this->_amount += deposit;
	this->_nbDeposits++;
	std::cout<<"amount:"<<this->_amount<<";";
	std::cout<<"nb_deposits:"<<this->_nbDeposits<<std::endl;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
}

bool Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" <<  this->_amount << ";";
	if (this->_amount < withdrawal)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		std::cout<<"withdrawal:"<<withdrawal<<";";
		this->_amount -= withdrawal;
		std::cout<<"amount:"<<this->_amount<<";";
		this->_nbWithdrawals++;
		std::cout<<"nb_withdrawals:"<<this->_nbWithdrawals<<std::endl;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
	}
	return (true);
}

void	Account::_displayTimestamp(void)
{
	std::cout<<"[19920104_091532] ";
}