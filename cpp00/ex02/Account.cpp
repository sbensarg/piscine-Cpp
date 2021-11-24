#include "Account.hpp"
#include <iostream>

Account::Account()
{

}
static int counter = -1;
static int j = 0;
static int i = 0;
Account::Account( int initial_deposit ) : _accountIndex(0), _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
	counter++;
	this->_nbDeposits = initial_deposit;
	this->_accountIndex+=counter;
	Account::_totalAmount += this->_nbDeposits;
	std::cout << "index:" << this->_accountIndex<< ";";
	std::cout << "amount:" << this->_nbDeposits<< ";";
	std::cout << "created" << std::endl;
}

Account::~Account()
{
	std::cout << "index:" << this->_accountIndex<< ";";
	std::cout << "amount:" << this->_amount<< ";";
	std::cout << "closed" << std::endl;
}


void	Account::makeDeposit( int deposit )
{
	int var;
	
	i = 0;
	std::cout << "index:" << this->_accountIndex<< ";";
	var = this->_nbDeposits;
	std::cout << "p_amount:" << this->_nbDeposits<< ";";
	if (deposit != 0)
	{
		i++;
		Account::_totalNbDeposits += i;
	}		
	this->_nbDeposits = deposit;
	std::cout << "deposit:" << this->_nbDeposits<< ";";
	this->_amount = deposit + var;
	std::cout << "amount:" << this->_amount<< ";";
	Account::_totalAmount += this->_nbDeposits;
	std::cout << "nb_deposits:" << i << std::endl;
}


bool	Account::makeWithdrawal( int withdrawal )
{
	int var;
	
	j = 0;
	std::cout << "index:" << this->_accountIndex<< ";";
	var = this->_amount;
	std::cout << "p_amount:" << this->_amount<< ";";
	if (withdrawal < this->_amount)
	{
		j++;
		Account::_totalNbWithdrawals += j;
		this->_nbWithdrawals = withdrawal;
		std::cout << "withdrawal:" << this->_nbWithdrawals<< ";";
		this->_amount = var - withdrawal;
		std::cout << "amount:" << this->_amount<< ";";
		Account::_totalAmount -= this->_nbWithdrawals;
		std::cout << "nb_withdrawals:" << j << std::endl;
		return (true);
	}
	else
	{
		std::cout << "withdrawal: refused" << std::endl;
		return (false);

	}

}

void	Account::displayAccountsInfos( void )
{
	Account::_nbAccounts = counter + 1;

	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:"<< Account::_totalAmount<< ";";
	std::cout << "deposits:" << Account::_totalNbDeposits<< ";";
	std::cout << "withdrawals:"<< Account::_totalNbWithdrawals << std::endl;
}

void	Account::displayStatus( void ) const 
{
	std::cout << "index:" << this->_accountIndex<< ";";
	if(this->_amount == 0)
		std::cout << "amount:" << this->_nbDeposits<< ";";
	else
		std::cout << "amount:" << this->_amount<< ";";
	if (this->_nbDeposits == 0)
		std::cout << "deposits:" << 0 << ";";
	else
		std::cout << "deposits:" << i << ";";
	if (this->_nbWithdrawals == 0)
		std::cout << "withdrawals:" << 0 << std::endl;
	else
		std::cout << "withdrawals:" << j << std::endl;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;