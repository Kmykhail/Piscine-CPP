/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 18:52:22 by kmykhail          #+#    #+#             */
/*   Updated: 2018/05/30 18:52:23 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_H
# define CONTACTS_H
#include <string>
#include <iomanip>
#include <cctype>
#include <iostream>
#include "head.h"

class Contacts
{
public:

	Contacts(void);
	~Contacts(void);

	void			add_contacts(void);
	void			print_columns(int wtf);

	std::string		getContact(int itr) const;
private:
	std::string _info[11];
};
#endif