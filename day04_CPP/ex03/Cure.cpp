/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:49:23 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/18 12:49:24 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("Cure") {

}

Cure::~Cure() {

}

Cure::Cure(Cure const &cpy) { *this = cpy; }

Cure& Cure::operator=(Cure const &rhs) {
    (void)rhs;
    return *this;
}

AMateria* Cure::clone() const {
    AMateria* qw = new Cure(*this);
    return qw;
}
