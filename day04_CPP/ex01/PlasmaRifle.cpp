/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 21:55:41 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/14 21:55:43 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 21, 5){
}

PlasmaRifle::PlasmaRifle(std::string const &name, int apcost, int damage) : AWeapon(name, apcost, damage){}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &cpy) {
    *this = cpy;
}

PlasmaRifle::~PlasmaRifle() {
    std::cout << "PlasmaRifle destructor called" << std::endl;
}

PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle const &rhs) {
    this->_name = rhs.getName();
    this->_damage = rhs.getDamage();
    this->_apcost = rhs.getAPCost();
    return *this;
}

void PlasmaRifle::attack() const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
