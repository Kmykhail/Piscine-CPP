/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 20:22:41 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/14 20:22:42 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void) {

}
AWeapon::AWeapon(std::string const &name, int damage, int apcost) : _name(name), _apcost(apcost), _damage(damage) {

}

AWeapon::AWeapon(AWeapon const &cpy) { *this = cpy;}

AWeapon::~AWeapon(void) {
    std::cout << "AWeapon destructor called" << std::endl;
}

std::string AWeapon::getName() const { return this->_name; }
AWeapon& AWeapon::operator=(AWeapon const &rhs) {
    this->_name = rhs.getName();
    this->_damage = rhs.getDamage();
    this->_apcost = rhs.getAPCost();
    return  *this;
}
int AWeapon::getAPCost(void) const { return this->_apcost; }
int AWeapon::getDamage(void) const { return  this->_damage; }

void AWeapon::setName(std::string name) { this->_name = name; }
void AWeapon::setApcost(int apcost) { this->_apcost = apcost; }
void AWeapon::setDamage(int damage) { this->_damage = damage; }