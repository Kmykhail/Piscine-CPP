/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 20:25:05 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/14 20:25:07 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

const int   Character::AP = 40;

Character::Character(void) {
    _name = "default";
    _action_point = Character::AP;
}

Character::Character(std::string const &name) : _name(name), _action_point(Character::AP){
    _en = NULL;
    _aw = NULL;
}

Character::Character(Character const &cpy) { *this = cpy; }

Character::~Character(void) {

}

Character& Character::operator=(Character const &rhs) {
    this->_name = rhs.getName();
    return  *this;
}

std::string Character::getName() const { return  this->_name; }
int Character::getApoints() const { return  this->_action_point; }

void Character::recoverAP() {
    _action_point += 10;
    if (_action_point > Character::AP)
        _action_point = Character::AP;
}

void Character::attack(Enemy* some) {
    _en = some;
    if (_aw != NULL && (_action_point  >= _aw->getAPCost()) && _en != NULL) {
        std::cout << _name << " attacks " << _en->getType() << " with a " << _aw->getName() << std::endl;
        _aw->attack();
        _en->takeDamage(_aw->getDamage());
        if (_en->getHP() <= 0)
            delete _en;
        _action_point -= _aw->getAPCost();
    }
}

void Character::equip(AWeapon* some) { _aw = some; }

Enemy* Character::getEnemy() const { return this->_en; }

AWeapon* Character::getWeapon() const { return  this->_aw; }

std::ostream & operator<<(std::ostream & o, Character const & rhs){
    std::string res = rhs.getName();
    res += " has ";
    if (rhs.getWeapon() != NULL){
        res += std::to_string(rhs.getApoints());
        res += " AP and wields a ";
        res += rhs.getWeapon()->getName() + "\n";
    }
    else{
        res += std::to_string(rhs.getApoints());
        res += " AP and and is unarmed \n";
    }
    o << res;
    return  o;
}