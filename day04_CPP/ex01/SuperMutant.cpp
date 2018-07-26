/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 20:23:54 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/14 20:23:55 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() {
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
    setType("Super Mutant");
    setHP(170);
}

SuperMutant::SuperMutant(int hp, std::string const &type) : Enemy(hp, type){
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &cpy) {
    *this = cpy;
}

SuperMutant::~SuperMutant() {
    std::cout << "Aaargh ..." << std::endl;
}

SuperMutant& SuperMutant::operator=(SuperMutant const &rhs) {
    this->_hp = rhs.getHP();
    this->_type = rhs.getType();
    return *this;
}

void SuperMutant::takeDamage(int damage) {
    if (damage <= 3)
        damage = 0;
    else
        damage -= 3;
    _hp -= (damage > 0) ? damage : 0;
}
