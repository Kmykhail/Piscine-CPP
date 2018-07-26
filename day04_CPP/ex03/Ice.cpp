/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:48:54 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/18 12:48:55 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Ice.hpp"

Ice::Ice() : AMateria("Ice") {
}

Ice::Ice(Ice const &cpy) { *this = cpy; }

Ice::~Ice() {
}

Ice& Ice::operator=(Ice const &rhs) {
    (void)rhs;
    return *this;
}

AMateria* Ice::clone() const {
    AMateria* qw = new Ice(*this);
    return qw;
}
