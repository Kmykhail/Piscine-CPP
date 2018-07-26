/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 20:16:00 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/13 20:16:01 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() {
    setAllValue(100, 60, 1, 60, 20, 5);
    setName("classic");
    setBot("[SuperTrap]: <");
    std::cout << "default constructor SuperTrap" << std::endl;
}

SuperTrap::SuperTrap(std::string nm) {
    setName(nm);
    setBot("[SuperTrap]: <");
    setAllValue(100, 60, 1, 60, 20, 5);
    std::cout << GRN << _bot << _name << ", HP: " << _hit_p << ", ENERGY: "\
    << _ener_p << ", LEVEL: " << _level << "> [hello , it's constructor FragTrap" << "]" << CL << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &cpy) { *this = cpy; }

SuperTrap::~SuperTrap() {
    std::cout << "default constructor SuperTrap" << std::endl;
}

SuperTrap & SuperTrap::operator=(SuperTrap const &rhs) {
    this->_hit_p = rhs._hit_p;
    this->_ener_p = rhs._ener_p;
    this->_level = rhs._level;
    this->_name = rhs.getName();
    return  *this;
}

void SuperTrap::setName(std::string name) {
    _name = name;
    setBot("[SuperTrap]: <");
}

void SuperTrap::rangedAttack(std::string const &target) {
    FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &tar) {
    NinjaTrap::meleeAttack(tar);
}

