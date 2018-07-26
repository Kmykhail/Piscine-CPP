/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:49:46 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/18 12:49:47 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {

}

Character::Character(std::string name) : _name(name) {
    _cnt_mat = 0;
    for (int i = 0; i < 4 ; ++i)
        _invent[i] = nullptr;
}

Character::~Character() {

}

Character::Character(Character const &cpy) { *this = cpy; }

Character& Character::operator=(Character const &rhs) {
    for (int i = 0; i < 4; ++i){
        _invent[i] = nullptr;
        _invent[i] = rhs._invent[i];
    }
    this->_name = rhs.getName();
    this->_cnt_mat = rhs._cnt_mat;
    return *this;
}

std::string const& Character::getName() const {
    return this->_name;
}

void Character::equip(AMateria *m) {
    if (_cnt_mat < 4)
        _invent[_cnt_mat++] = m;
}

void Character::unequip(int idx) {
    if (idx < 4)
        _invent[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target) {
    if (idx < 4 && _invent[idx] != nullptr)
        _invent[idx]->use(target);
}