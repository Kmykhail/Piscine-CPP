/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 20:23:17 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/14 20:23:19 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 50, 8) {

}

PowerFist::PowerFist(std::string const &name, int apcost, int damage) : AWeapon(name, apcost, damage) {}

PowerFist::PowerFist(PowerFist const &rhs) {
    *this = rhs;
}

PowerFist::~PowerFist(void) {
    std::cout << "PowerFist destructor called" << std::endl;
}

PowerFist& PowerFist::operator=(PowerFist const &rhs) {
    this->_name = rhs.getName();
    this->_apcost = rhs.getAPCost();
    this->_damage = rhs.getDamage();
    return *this;
}

void PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
}
