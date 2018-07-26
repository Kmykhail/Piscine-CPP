/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/17 17:12:44 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/17 17:12:45 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

int     AssaultTerminator::one = 1;

AssaultTerminator::AssaultTerminator(void) {
    srand(time(NULL));
    _id = rand() % 100 + AssaultTerminator::one;
    AssaultTerminator::one += 1;
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator(void) {
    std::cout << "i'will be back" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &cpy) {
    *this = cpy;
}

AssaultTerminator& AssaultTerminator::operator=(AssaultTerminator const &rhs) {
    (void)rhs;
    return (*this);
}
void AssaultTerminator::battleCry() const {
    std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void AssaultTerminator::rangedAttack() const {
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const {
    std::cout << "* attacks with chainfists *" << std::endl;
}

ISpaceMarine* AssaultTerminator::clone() const {
    ISpaceMarine *qw = new AssaultTerminator(*this);
    return  qw;
}