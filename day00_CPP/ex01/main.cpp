/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 18:51:29 by kmykhail          #+#    #+#             */
/*   Updated: 2018/05/30 18:51:31 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

int		check_value(std::string	str, int cnt)
{
	int val;

	val = 0;
	for (size_t i = 0; i < str.length(); ++i)
		if (!isdigit(str[i]))
			return 0;
	val = std::stol(str, nullptr, 10);
	if (val <= 0 || val > cnt)
		return 0;
	return val;
}

std::string		check_len(std::string s)
{
	if (s.length() > 10)
	{
		s[9] = '.';
		s.erase(10, s.length() - 10);
	}
	return (s);
}

int		main()
{
	int cnt = 0;
	int num = 0;
	std::string str;
	Contacts user[8];
	do{
		if (cnt < 8)
			std::cout << GRN << "Enter command: [ADD, SEARCH, EXIT]" << CL << std::endl;
		else
			std::cout << GRN << "Enter command: " << CL "[ADD, " GRN << "SEARCH, EXIT]"<< CL << std::endl;
		std::cin >> str;
		if (str == "ADD" && cnt < 8)
			user[cnt++].add_contacts();
		else if (str == "SEARCH" && cnt)
		{
			user[cnt].print_columns(0);
			for (int i = 0; i < cnt; ++i)
			{
				std::cout << CYAN << "|" << std::setw(10) << i + 1 << "|";
				std::cout << std::setw(10) << check_len(user[i].getContact(0)) << "|";
				std::cout << std::setw(10) << check_len(user[i].getContact(1)) << "|";
				std::cout << std::setw(10) << check_len(user[i].getContact(2)) << "|" << CL << std::endl;
			}
			do{
				std::cout << RED << "Enter number of index or Q leave from menu" << CL << std::endl;
				std::cin >> str;
				if ((num = check_value(str, cnt)))
				{
					for (int i = 0; i < 11; ++i)
					{
						user[cnt].print_columns(i + 1);
						std::cout<< YEL  << user[num - 1].getContact(i) << CL << std::endl;
					}
				}
			} while (str != "Q" && num != 1 && std::cin);
		}
		else if (str == "SEARCH" && !cnt)
			std::cout << RED << "You don't have any contact" << CL << std::endl;
	} while (str != "EXIT" && std::cin);
}
