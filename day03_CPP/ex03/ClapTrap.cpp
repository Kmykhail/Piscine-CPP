/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 13:02:39 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/13 13:02:40 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    setAllValue(100, 100, 1, 30, 20, 5);
    setName("classic");
    setBot("[ClapTrap]: <");
    std::cout << GRN << "ClapTrap constructor called" << CL << std::endl;
}

ClapTrap::ClapTrap(std::string name){
    setBot("[ClapTrap]: <");
    setName(name);
    setAllValue(100, 100, 1, 30, 20, 5);
    std::cout << GRN << "[ClapTrap]: <" << _name << ", HP: " << _hit_p << ", ENERGY: "\
    << _ener_p << "> [hello , my level is " << _level << "]" << CL << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &cpy) {
    *this = cpy;
}

ClapTrap::~ClapTrap() {
    std::cout <<  GRN  << "ClapTrap destructor called" << CL << std::endl;
}

void ClapTrap::setName(std::string name) { this->_name = name; }
void ClapTrap::setBot(std::string bot) { this->_bot = bot; }

std::string ClapTrap::getName() const { return  this->_name; }

void ClapTrap::setAllValue(unsigned int max_hit, unsigned int max_ener, unsigned int level, unsigned int melee, unsigned int ranged, unsigned int armor){
    _max_hit_p = max_hit;
    _max_ener_p = max_ener;
    _hit_p = _max_hit_p;
    _ener_p = _max_ener_p;
    _level = level;
    _melle_damage = melee;
    _ranged_damage = ranged;
    _armor_reduction = armor;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &rhs) {
    this->_hit_p = rhs._hit_p;
    this->_ener_p = rhs._ener_p;
    this->_level = rhs._level;
    this->_name = rhs.getName();
    return *this;
}

void ClapTrap::rangedAttack(std::string const &target) {
    if (!_hit_p)
        this->_fixme();
    else if (_ener_p >= ClapTrap::_ranged_damage) {
        std::cout << CYAN << "\n" << _bot << _name << ", HP: " << _hit_p << ", ENERGY: " << _ener_p \
        << "> [cost of energy for this strike is " << ClapTrap::_ranged_damage << "]" << std::endl;
        _ener_p -= ClapTrap::_ranged_damage;
        std::cout << "[ClapTrap]: <" << _name << ", HP:  " << _hit_p << ", ENERGY: "\
        << _ener_p << "> [attacks <" << target << "> at RANGE, causing <"\
        << ClapTrap::_ranged_damage << "> "\
        << "points of damage!]" << "\n" << CL << std::endl;
    }
}

void ClapTrap::meleeAttack(std::string const &target) {
    if (!_hit_p)
        this->_fixme();
    else if (_ener_p >= ClapTrap::_melle_damage){
        std::cout << CYAN << "\n" << _bot << _name << ", HP: " << _hit_p << ", ENERGY: " << _ener_p \
        << "> [cost of energy for this strike is " << ClapTrap::_melle_damage << "]" << std::endl;
        _ener_p -= ClapTrap::_melle_damage;
        std::cout  << _bot << _name << ", HP: " << _hit_p << ", ENERGY: "\
        << _ener_p << "> [attacks <" << target << "> at MELEE, causing <"\
        << ClapTrap::_melle_damage << "> "\
        << "points of damage!]" << "\n" << CL << std::endl;
    }
    else
        std::cout << YEL << "\n" << "[ClapTrap]: <" << _name << ", HP:  " << _hit_p << ", ENERGY: "\
        << _ener_p << "> [need more energy!!!]" << "\n" << CL << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount) {
    if (((int)amount - (int)ClapTrap::_armor_reduction >= (int)ClapTrap::_max_hit_p) ||\
    (int)amount - (int)ClapTrap::_armor_reduction >= (int)_hit_p) {
        _hit_p = 0;
        _ener_p = 0;
        std::cout << RED <<"\n" << _bot << _name << ", HP: " << _hit_p << ", ENERGY: "\
        << _ener_p  << "> [lol i'm R.I.P]" <<"\n" << CL << std::endl;
    }
    else{
        _hit_p -= (amount <= ClapTrap::_armor_reduction) ? 0 : amount - ClapTrap::_armor_reduction;
        if (_hit_p > 0 && _hit_p < 25)
            std::cout << RED <<"\n" << _bot << _name << ", HP: " << _hit_p << ", ENERGY: "\
            << _ener_p << "> [please don't touch me]" <<"\n" << CL << std::endl;
        else if (_hit_p > 25 && _hit_p < 50)
            std::cout << YEL <<"\n" << _bot << _name << ", HP: " << _hit_p << ", ENERGY: "\
            << _ener_p  << "> [omg i must do something]"<<"\n" << CL << std::endl;
        else if (_hit_p > 50 && _hit_p < 75)
            std::cout << CYAN <<"\n" << _bot << _name << ", HP: " << _hit_p << ", ENERGY: "\
            << _ener_p << "> [ooo is this all you can]" <<"\n" << CL << std::endl;
        else if (_hit_p > 75)
            std::cout << GRN <<"\n" << _bot << _name << ", HP: " << _hit_p << ", ENERGY: "\
            << _ener_p << "> [who the hell are you ?]" <<"\n" << CL << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (!_hit_p){
        (_hit_p + amount > ClapTrap::_max_hit_p) ? _hit_p = 100 : _hit_p += amount;
        std::cout << GRN <<"\n" << _bot << _name << ", HP: " << _hit_p << ", ENERGY: " << 0 \
        << "> [oh i'm back, YEAH]" <<"\n" << CL << std::endl;
    }
    else {
        (_hit_p + amount > ClapTrap::_max_hit_p) ? _hit_p = 100 : _hit_p += amount;
        std::cout << GRN << "\n" << _bot << _name << "> HP: " << _hit_p << ", ENERGY: " << _ener_p << "\n" << CL << std::endl;
    }
}

void ClapTrap::moreEnergy(unsigned int amount) {
    if (_ener_p + amount >= ClapTrap::_max_ener_p)
        _ener_p = ClapTrap::_max_ener_p;
    else
        _ener_p = _ener_p + amount;
    std::cout <<"\n" << _bot << _name << ", HP: " << _hit_p << ", ENERGY: "\
        << _ener_p <<"\n" << std::endl;

}

void ClapTrap::_fixme() const {
    for (int i = 0; i < 5; ++i)
        std::cout << RED << _bot << _name << ", HP: R.I.P" << ", ENERGY: "\
        << _ener_p << "> [FIX ME]" << CL << std::endl;
}