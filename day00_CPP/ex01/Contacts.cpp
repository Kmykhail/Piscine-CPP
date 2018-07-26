/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 18:52:15 by kmykhail          #+#    #+#             */
/*   Updated: 2018/05/30 18:52:16 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

Contacts::Contacts(void){

}
Contacts::~Contacts(void){

}

void	Contacts::add_contacts(void){
	for (int i = 0; i < 11; ++i)
	{
		(!i) ? std::cout << YEL <<  "Enter first name" << CL << std::endl : std::cout;
		(i == 1) ? (std::cout<< YEL << "Enter last name" << CL << std::endl) : std::cout;
		(i == 2) ? (std::cout<< YEL << "Enter nickname" << CL << std::endl) : std::cout;
		(i == 3) ? (std::cout<< YEL << "Enter login" << CL << std::endl) : std::cout;
		(i == 4) ? (std::cout<< YEL << "Enter postal address" << CL << std::endl): std::cout;
		(i == 5) ? (std::cout<< YEL << "Enter email address" << CL << std::endl) : std::cout;
		(i == 6) ? (std::cout<< YEL << "Enter phone number" << CL << std::endl) : std::cout;
		(i == 7) ? (std::cout<< YEL << "Enter birthday date" << CL << std::endl) : std::cout;
		(i == 8) ? (std::cout<< YEL << "Enter favorite meal" << CL << std::endl) : std::cout;
		(i == 9) ? (std::cout<< YEL << "Enter underwear color" << CL << std::endl) : std::cout;
		(i == 10) ? (std::cout<< YEL << "Enter darkest secret" << CL << std::endl) : std::cout;
		do{
			 if(!std::getline(std::cin, this->_info[i]))
				return ;
		}while (this->_info[i].length() == 0);
	}
	std::cout << GRN << "***Contact created***" << CL << std::endl;
}

std::string		Contacts::getContact(int itr) const{
	return	this->_info[itr];
}

void			Contacts::print_columns(int i){

	if (!i)
	{
		std::cout << MAG << "|" << std::setw(10) << "index" << "|"
		<< std::setw(10) << "first name" << "|" 
		<< std::setw(10) << "last name" << "|"
		<< std::setw(10) << "nickname" << "|" << CL << std::endl;
		return ;
	}
	(i == 1) ? std::cout<< YEL << "Enter first name: " << CL << std::setw(6) : std::cout;
	(i == 2) ? std::cout<< YEL << "Enter last name: " << CL << std::setw(7) : std::cout;
	(i == 3) ? std::cout<< YEL << "Enter nickname: " << CL << std::setw(8) : std::cout;
	(i == 4) ? std::cout<< YEL << "Enter login: " << CL << std::setw(11) : std::cout;
	(i == 5) ? std::cout<< YEL << "Enter postal address: " << CL << std::setw(3): std::cout;
	(i == 6) ? std::cout<< YEL << "Enter email address: " << CL << std::setw(4) : std::cout;
	(i == 7) ? std::cout<< YEL << "Enter phone number: " << CL << std::setw(4) : std::cout;
	(i == 8) ? std::cout<< YEL << "Enter birthday date: " << CL << std::setw(3) : std::cout;
	(i == 9) ? std::cout<< YEL << "Enter favorite meal: " << CL << std::setw(3) : std::cout;
	(i == 10) ? std::cout<< YEL << "Enter underwear color: " << CL << std::setw(1) : std::cout;
	(i == 11) ? std::cout<< YEL << "Enter darkest secret: " << CL << std::setw(2) : std::cout;

}