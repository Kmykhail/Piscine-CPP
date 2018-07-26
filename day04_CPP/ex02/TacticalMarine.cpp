/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/17 17:12:25 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/17 17:12:26 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

int TacticalMarine::one = 1;

TacticalMarine::TacticalMarine() {
    srand(time(NULL));
    _id = rand() % 100 + TacticalMarine::one;
    TacticalMarine::one += 1;
    std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::~TacticalMarine() {
    std::cout << "Aaargh ..." <<std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &cpy) {
    *this = cpy;
}

TacticalMarine& TacticalMarine::operator=(TacticalMarine const &rhs) {
    (void)rhs;
    return (*this);
}

void TacticalMarine::battleCry() const {
    std::cout << "For the holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack() const {
    std::cout << "* attacks with bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const {
    std::cout << "* attacks with chainsword *" << std::endl;
}

ISpaceMarine* TacticalMarine::clone() const {
    ISpaceMarine   *qw = new TacticalMarine(*this);
    return qw;
}