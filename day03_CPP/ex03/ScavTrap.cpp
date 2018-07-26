/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 13:02:16 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/13 13:02:33 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
    setName("classic");
    setBot("[ScavTrap]: <");
    setAllValue(100, 50, 1, 20, 15, 3);
    std::cout << GRN << "ScavTrap constructor called" << CL << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & cpy) {
    *this = cpy;
}

ScavTrap::ScavTrap(std::string nm) : ClapTrap(){
    setName(nm);
    setBot("[ScavTrap]: <");
    setAllValue(100, 50, 1, 20, 15, 3);
    std::cout << CYAN << _bot << _name << ", HP: " << _hit_p << ", ENERGY: "\
    << _ener_p << ", Level: " << _level << "> [hello , it's constructor ScavTrap" << "]" << CL << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << CYAN << _bot << _name << ", HP: " << _hit_p << ", ENERGY: "\
    << _ener_p << "> [destructor ScavTrap]" << CL << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &rhs) {
    this->_hit_p = rhs._hit_p;
    this->_ener_p = rhs._ener_p;
    this->_level = rhs._level;
    this->_name = rhs.getName();
    return  *this;
}

void ScavTrap::setName(std::string name) {
    _name = name;
    setBot("[ScavTrap]: <");
}

void    ScavTrap::rangedAttack(std::string const & tar){
    if (!_hit_p)
        this->_fixme();
    else if (_ener_p >= ScavTrap::_ranged_damage){
        std::cout << CYAN << "\n" << _bot << _name << ", HP: " << _hit_p << ", ENERGY: " << _ener_p \
        << "> [cost of energy for this strike is " << ScavTrap::_ranged_damage << "]" << std::endl;
        _ener_p -= ScavTrap::_ranged_damage;
        std::cout << _bot << _name << ", HP:  " << _hit_p << ", ENERGY: "\
        << _ener_p << "> [attacks <" << tar << "> at RANGE, causing <"\
        << ScavTrap::_ranged_damage << "> "\
        << "points of damage!]" << "\n" << CL << std::endl;
    }
    else
        std::cout << YEL << _bot << _name << ", HP:  " << _hit_p << ", ENERGY: "\
        << _ener_p << "> [need more energy!!!]" << CL << std::endl;
}

void    ScavTrap::meleeAttack(std::string const & tar){
    if (!_hit_p)
        this->_fixme();
    else if (_ener_p >= ScavTrap::_melle_damage){
        std::cout << CYAN << "\n" << _bot << _name << ", HP: " << _hit_p << ", ENERGY: " << _ener_p \
        << "> [cost of energy for this strike is " << ScavTrap::_melle_damage << "]" << std::endl;
        _ener_p -= ScavTrap::_melle_damage;
        std::cout  << _bot << _name << ", HP: " << _hit_p << ", ENERGY: "\
        << _ener_p << "> [attacks <" << tar << "> at MELEE, causing <"\
        << ScavTrap::_melle_damage << "> "\
        << "points of damage!]" << "\n" << CL << std::endl;
    }
    else
        std::cout << YEL << "\n" << _bot << _name << ", HP:  " << _hit_p << ", ENERGY: "\
        << _ener_p << "> [need more energy!!!]" << "\n" << CL << std::endl;
}

void    ScavTrap::challengeNewcomer(void) {
    int num = 0;
    std::string attack[5] = {"Task_1", "Task_2", "Task_3", "Task_4", "Task_5"};
    num = rand() % 5;
    std::cout << "YYYYY it is a " << attack[num] << std::endl;
}
