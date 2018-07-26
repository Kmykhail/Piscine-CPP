/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 17:53:52 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/13 17:53:53 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) {
    setAllValue(60, 120, 1, 60, 5, 0);
    setName("classic");
    setBot("[NinjaTrap]: <");
    std::cout << GRN << "NinjaTrap constructor called" << CL << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & cpy) {
    *this = cpy;
}

NinjaTrap::NinjaTrap(std::string nm) {
    setName(nm);
    setBot("[NinjaTrap]: <");
    setAllValue(60, 120, 1, 60, 5, 0);
    std::cout << CYAN << _bot << _name << ", HP: " << _hit_p << ", ENERGY: "\
    << _ener_p << ", Level: " << _level << "> [hello , it's constructor NinjaTrap" << "]" << CL << std::endl;
}

NinjaTrap::~NinjaTrap(){
    std::cout << CYAN << _bot << _name << ", HP: " << _hit_p << ", ENERGY: "\
    << _ener_p << "> [destructor NinjaTrap]" << CL << std::endl;
}

NinjaTrap& NinjaTrap::operator=(NinjaTrap const &rhs) {
    this->_hit_p = rhs._hit_p;
    this->_ener_p = rhs._ener_p;
    this->_level = rhs._level;
    this->_name = rhs.getName();
    return  *this;
}

void NinjaTrap::setName(std::string name) {
    _name = name;
    setBot("[NinjaTrap]: <");
}

void    NinjaTrap::rangedAttack(std::string const & tar){
    if (!_hit_p)
        this->_fixme();
    else if (_ener_p >= NinjaTrap::_ranged_damage){
        std::cout << CYAN << "\n" << _bot << _name << ", HP: " << _hit_p << ", ENERGY: " << _ener_p \
        << "> [cost of energy for this strike is " << NinjaTrap::_ranged_damage << "]" << std::endl;
        _ener_p -= NinjaTrap::_ranged_damage;
        std::cout << _bot << _name << ", HP:  " << _hit_p << ", ENERGY: "\
        << _ener_p << "> [attacks <" << tar << "> at RANGE, causing <"\
        << NinjaTrap::_ranged_damage << "> "\
        << "points of damage!]" << "\n" << CL << std::endl;
    }
    else
        std::cout << YEL << _bot << _name << ", HP:  " << _hit_p << ", ENERGY: "\
        << _ener_p << "> [need more energy!!!]" << CL << std::endl;
}

void    NinjaTrap::meleeAttack(std::string const & tar){
    if (!_hit_p)
        this->_fixme();
    else if (_ener_p >= NinjaTrap::_melle_damage){
        std::cout << CYAN << "\n" << _bot << _name << ", HP: " << _hit_p << ", ENERGY: " << _ener_p \
        << "> [cost of energy for this strike is " << NinjaTrap::_melle_damage << "]" << std::endl;
        _ener_p -= NinjaTrap::_melle_damage;
        std::cout  << _bot << _name << ", HP: " << _hit_p << ", ENERGY: "\
        << _ener_p << "> [attacks <" << tar << "> at MELEE, causing <"\
        << NinjaTrap::_melle_damage << "> "\
        << "points of damage!]" << "\n" << CL << std::endl;
    }
    else
        std::cout << YEL << "\n" << _bot << _name << ", HP:  " << _hit_p << ", ENERGY: "\
        << _ener_p << "> [need more energy!!!]" << "\n" << CL << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const & target) {
    std::cout << _bot <<  this->getName() <<\
     " kill " << target.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const & target) {
    std::cout << _bot <<  this->getName() <<\
     " kill " << target.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const & target) {
    std::cout << _bot <<  this->getName() <<\
     " kill " << target.getName() << std::endl;
}