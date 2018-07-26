/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 20:23:35 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/14 20:23:38 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() {

}

Enemy::~Enemy(void) {
}

Enemy::Enemy(Enemy const &cpy) {
    *this = cpy;
}

Enemy::Enemy(int hp, std::string const &type) : _type(type), _hp(hp) {

}

Enemy& Enemy::operator=(Enemy const &rhs) {
    this->_type = rhs.getType();
    this->_hp = rhs.getHP();
    return *this;
}

std::string Enemy::getType() const { return  this->_type; }
int Enemy::getHP() const { return  this->_hp; }

void Enemy::setHP(int hp) { this->_hp = hp; }
void Enemy::setType(std::string type) { this->_type = type; }

void Enemy::takeDamage(int damage) {
    _hp -= (damage > 0) ? damage : 0;
}