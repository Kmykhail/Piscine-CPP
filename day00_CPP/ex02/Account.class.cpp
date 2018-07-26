/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 20:03:03 by kmykhail          #+#    #+#             */
/*   Updated: 2018/05/31 20:03:04 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <time.h>
#include <iostream>

int 	Account::_nbAccounts = 0;
int 	Account::_totalAmount = 0;
int 	Account::_totalNbDeposits = 0;
int 	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit){
	this->_accountIndex = Account::_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
	<< this->_amount << ";created" << std::endl; 
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
}

Account::~Account(void){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
	<< ";closed" << std::endl;
}

void	Account::displayAccountsInfos( void ){
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount
	<< ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals
	<< std::endl;
}

int	Account::getNbAccounts( void ){return Account::_nbAccounts; }
int	Account::getTotalAmount( void ){return Account::_totalAmount;}
int	Account::getNbDeposits( void ){return Account::_totalNbDeposits;}
int	Account::getNbWithdrawals( void ){return Account::_totalNbWithdrawals;}

void	Account::makeDeposit( int d) {
	this->_nbDeposits = d;
	this->_amount += d;
	Account::_totalAmount += d;
	Account::_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:"
	<< this->_amount - d << ";deposit:" << this->_nbDeposits
	<< ";amount:" << this->_amount << ";nb_deposits:"
	<< 1 << std::endl;
	this->_nbDeposits = (this->_nbDeposits > 0) ? 1 : this->_nbDeposits;
}

bool	Account::makeWithdrawal( int w ){
	this->_nbWithdrawals = (this->_amount - w < 0) ? 0 : 1;
	Account::_displayTimestamp();
	if (!this->_nbWithdrawals)
	{
		std::cout << "index:" << this->_accountIndex << ";p_amount:"
		<< this->_amount << ";withdrawal:refused" << std::endl;
	}
	else{
		std::cout << "index:" << this->_accountIndex << ";p_amount:"
		<< this->_amount << ";withdrawal:" << w << ";amount:" << this->_amount - w
		<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		this->_amount -= w;
		Account::_totalAmount -= w;
		Account::_totalNbWithdrawals++;
	}
	return 0;
}

int		Account::checkAmount( void ) const{
	static int a = 0;
	a++;
	return (a);
}

void	Account::displayStatus( void ) const{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
	<< this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:"
	<< this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ){
	time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    char date[20];
    strftime(date, sizeof(date), "%Y%m%d", tm);
    std::cout << "[" << date << "_" << t/10000 << "] ";
	return ;
}