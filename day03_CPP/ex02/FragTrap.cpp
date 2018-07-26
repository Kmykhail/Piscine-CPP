/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 19:32:22 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/11 19:32:23 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << GRN << "FragTrap constructor called" << CL << std::endl;
}

FragTrap::FragTrap(std::string nm) : ClapTrap(){
    setName(nm);
    setBot("[FragTrap]: <");
    std::cout << GRN << _bot << _name << ", HP: " << _hit_p << ", ENERGY: "\
    << _ener_p << ", LEVEL: " << _level << "> [hello , it's constructor FragTrap" << "]" << CL << std::endl;
}

FragTrap::FragTrap(FragTrap const &cpy) { *this = cpy; }

FragTrap::~FragTrap(){
    std::cout << GRN << _bot << _name << ", HP: " << _hit_p << ", ENERGY: "\
    << _ener_p << "> [destructor FragTrap]" << CL << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const &rhs) {
    this->_hit_p = rhs._hit_p;
    this->_ener_p = rhs._ener_p;
    this->_level = rhs._level;
    this->_name = rhs.getName();
    return  *this;
}

void FragTrap::setName(std::string name) {
    _name = name;
    setBot("[FragTrap]: <");
}

//void FragTrap::setBot(std::string bot) { _bot = bot;}

void    FragTrap::rangedAttack(std::string const & tar){
    if (!_hit_p)
        this->_fixme();
    else if (_ener_p >= FragTrap::_ranged_damage){
        std::cout << CYAN << "\n" << _bot << _name << ", HP: " << _hit_p << ", ENERGY: " << _ener_p \
        << "> [cost of energy for this strike is " << FragTrap::_ranged_damage << "]" << std::endl;
        _ener_p -= FragTrap::_ranged_damage;
        std::cout << _bot << _name << ", HP:  " << _hit_p << ", ENERGY: "\
        << _ener_p << "> [attacks <" << tar << "> at RANGE, causing <"\
        << FragTrap::_ranged_damage << "> "\
        << "points of damage!]" << "\n" << CL << std::endl;
    }
    else
        std::cout << YEL << _bot << _name << ", HP:  " << _hit_p << ", ENERGY: "\
        << _ener_p << "> [need more energy!!!]" << CL << std::endl;
}

void    FragTrap::meleeAttack(std::string const & tar){
    if (!_hit_p)
        this->_fixme();
    else if (_ener_p >= FragTrap::_melle_damage){
        std::cout << CYAN << "\n" << _bot << _name << ", HP: " << _hit_p << ", ENERGY: " << _ener_p \
        << "> [cost of energy for this strike is " << FragTrap::_melle_damage << "]" << std::endl;
        _ener_p -= FragTrap::_melle_damage;
        std::cout  << _bot << _name << ", HP: " << _hit_p << ", ENERGY: "\
        << _ener_p << "> [attacks <" << tar << "> at MELEE, causing <"\
        << FragTrap::_melle_damage << "> "\
        << "points of damage!]" << "\n" << CL << std::endl;
    }
    else
        std::cout << YEL << "\n" << _bot << _name << ", HP:  " << _hit_p << ", ENERGY: "\
        << _ener_p << "> [need more energy!!!]" << "\n" << CL << std::endl;
}

void    FragTrap::vaulthunter_dot_exe(std::string const &target) {
    int num = 0;
    srand(time(NULL));
    std::string attack[5] = {"SHOKER", "FIRE", "NANO__botS", "ROSKETS", "LAZER"};
    num = rand() % 5;
    if (_ener_p < 25)
        std::cout << YEL <<"\n" << _bot << _name << ", HP:  " << _hit_p << ", ENERGY: "\
        << _ener_p << "> [need more energy!!!]" <<"\n" << CL << std::endl;
    else{
        std::cout << CYAN << "\n" << _bot << _name << ", HP: " << _hit_p << ", ENERGY: " << _ener_p \
        << "> [cost of energy for this strike is " << 25 << "]" << std::endl;
        _ener_p -= 25;
        std::cout << _bot << _name << ", HP:  " << _hit_p << ", ENERGY: "\
        << _ener_p << "> [attacks <" << target << "> at " << attack[num] << ", causing <"\
        << num * 10 << "> "\
        << "points of damage!]" << "\n" << CL <<  std::endl;
    }
}