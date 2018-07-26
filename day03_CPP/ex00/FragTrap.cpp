/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 19:32:22 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/21 11:44:41 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"


unsigned int     FragTrap::_max_ener_p = 100;
unsigned int     FragTrap::_max_hit_p = 100;
unsigned int     FragTrap::_melle_damage = 30;
unsigned int     FragTrap::_ranged_damage = 20;
unsigned int     FragTrap::_armor_reduction = 5;

FragTrap::FragTrap() : _hit_p(100), _ener_p(100), _level(1){
    std::cout << GRN << "FragTrap constructor called" << CL << std::endl;
}

FragTrap::FragTrap(std::string name) : _hit_p(100), _ener_p(100), _level(1) {
    setBot("[FragTrap]: <");
    setName(name);
    std::cout << GRN << "[FragTrap]: <" << _name << ", HP: " << _hit_p << ", ENERGY: "\
    << _ener_p << "> [hello , my level is " << _level << "]" << CL << std::endl;
}

FragTrap::FragTrap(FragTrap const &cpy) {
    *this = cpy;
}

FragTrap::~FragTrap() {
    std::cout <<  GRN  << "FragTrap destructor called" << CL << std::endl;
}

void FragTrap::setName(std::string name) {
    this->_name = name;
    setBot("[FragTrap]: <");
}

void FragTrap::setBot(std::string bot) { this->_bot = bot; }

std::string FragTrap::getName() const { return  this->_name; }

FragTrap& FragTrap::operator=(FragTrap const &rhs) {
    this->_hit_p = rhs._hit_p;
    this->_ener_p = rhs._ener_p;
    this->_level = rhs._level;
    this->_name = rhs.getName();
    return *this;
}

void FragTrap::rangedAttack(std::string const &target) {
    if (!_hit_p)
        this->_fixme();
    else if (_ener_p >= FragTrap::_ranged_damage) {
        std::cout << CYAN << "\n" << _bot << _name << ", HP: " << _hit_p << ", ENERGY: " << _ener_p \
        << "> [cost of energy for this strike is " << FragTrap::_ranged_damage << "]" << std::endl;
        _ener_p -= FragTrap::_ranged_damage;
        std::cout << "[FragTrap]: <" << _name << ", HP:  " << _hit_p << ", ENERGY: "\
        << _ener_p << "> [attacks <" << target << "> at RANGE, causing <"\
        << FragTrap::_ranged_damage << "> "\
        << "points of damage!]" << "\n" << CL << std::endl;
    }
}

void FragTrap::meleeAttack(std::string const &target) {
    if (!_hit_p)
        this->_fixme();
    else if (_ener_p >= FragTrap::_melle_damage){
        std::cout << CYAN << "\n" << _bot << _name << ", HP: " << _hit_p << ", ENERGY: " << _ener_p \
        << "> [cost of energy for this strike is " << FragTrap::_melle_damage << "]" << std::endl;
        _ener_p -= FragTrap::_melle_damage;
        std::cout  << _bot << _name << ", HP: " << _hit_p << ", ENERGY: "\
        << _ener_p << "> [attacks <" << target << "> at MELEE, causing <"\
        << FragTrap::_melle_damage << "> "\
        << "points of damage!]" << "\n" << CL << std::endl;
    }
    else
        std::cout << YEL << "\n" << "[FragTrap]: <" << _name << ", HP:  " << _hit_p << ", ENERGY: "\
        << _ener_p << "> [need more energy!!!]" << "\n" << CL << std::endl;

}

void FragTrap::takeDamage(unsigned int amount) {
    if (((int)amount - (int)FragTrap::_armor_reduction >= (int)FragTrap::_max_hit_p) ||\
    (int)amount - (int)FragTrap::_armor_reduction >= (int)_hit_p) {
        _hit_p = 0;
        _ener_p = 0;
        std::cout << RED <<"\n" << _bot << _name << ", HP: " << _hit_p << ", ENERGY: "\
        << _ener_p  << "> [lol i'm R.I.P]" <<"\n" << CL << std::endl;
    }
    else{
        _hit_p -= (amount <= FragTrap::_armor_reduction) ? 0 : amount - FragTrap::_armor_reduction;
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

void FragTrap::beRepaired(unsigned int amount) {
    if (!_hit_p){
        (_hit_p + amount > FragTrap::_max_hit_p) ? _hit_p = 100 : _hit_p += amount;
        std::cout << GRN <<"\n" << _bot << _name << ", HP: " << _hit_p << ", ENERGY: " << 0 \
        << "> [oh i'm back, YEAH]" <<"\n" << CL << std::endl;
    }
    else {
        (_hit_p + amount > FragTrap::_max_hit_p) ? _hit_p = 100 : _hit_p += amount;
        std::cout << GRN << "\n" << _bot << _name << "> HP: " << _hit_p << ", ENERGY: " << _ener_p << "\n" << CL << std::endl;
    }
}

void FragTrap::moreEnergy(unsigned int amount) {
    if (_ener_p + amount >= FragTrap::_max_ener_p)
        _ener_p = FragTrap::_max_ener_p;
    else
        _ener_p = _ener_p + amount;
    std::cout <<"\n" << _bot << _name << ", HP: " << _hit_p << ", ENERGY: "\
        << _ener_p <<"\n" << std::endl;

}

void FragTrap::_fixme() const {
    for (int i = 0; i < 5; ++i)
        std::cout << RED << _bot << _name << ", HP: R.I.P" << ", ENERGY: "\
        << _ener_p << "> [FIX ME]" << CL << std::endl;
}
void    FragTrap::vaulthunter_dot_exe(std::string const &target) {
    int num = 0;
    std::string attack[5] = {"SHOKER", "FIRE", "NANO_BOTS", "ROSKETS", "LAZER"};
    num = rand() % 5;
    if (_ener_p < 25)
        std::cout << YEL <<"\n" << BOT << _name << ", HP:  " << _hit_p << ", ENERGY: "\
        << _ener_p << "> [need more energy!!!]" <<"\n" << CL << std::endl;
    else{
        std::cout << CYAN << "\n" << BOT << _name << ", HP: " << _hit_p << ", ENERGY: " << _ener_p \
        << "> [cost of energy for this strike is " << 25 << "]" << std::endl;
        _ener_p -= 25;
        std::cout << BOT << _name << ", HP:  " << _hit_p << ", ENERGY: "\
        << _ener_p << "> [attacks <" << target << "> at " << attack[num] << ", causing <"\
        << num * 10 << "> "\
        << "points of damage!]" << "\n" << CL <<  std::endl;
    }
}
