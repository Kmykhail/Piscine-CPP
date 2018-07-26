//
// Created by Kostiantyn MYKHAILENKO on 6/12/18.
//

#include "ScavTrap.hpp"

unsigned int     ScavTrap::_max_ener_p = 50;
unsigned int     ScavTrap::_max_hit_p = 100;
unsigned int     ScavTrap::_melle_damage = 20;
unsigned int     ScavTrap::_ranged_damage = 15;
unsigned int     ScavTrap::_armor_reduction = 3;

ScavTrap::ScavTrap() : _hit_p(100), _ener_p(50), _level(1){
    std::cout << GRN << "ScavTrap constructor called" << CL << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _hit_p(100), _ener_p(100), _level(1) {
    setBot("[ScavTrap]: <");
    setName(name);
    std::cout << GRN << "[ScavTrap]: <" << _name << ", HP: " << _hit_p << ", ENERGY: "\
    << _ener_p << "> [hello , my level is " << _level << "]" << CL << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &cpy) {
    *this = cpy;
}

ScavTrap::~ScavTrap() {
    std::cout <<  GRN  << "ScavTrap destructor called" << CL << std::endl;
}

void ScavTrap::setName(std::string name) {
    this->_name = name;
    setBot("[ScavTrap]: <");
}

void ScavTrap::setBot(std::string bot) { this->_bot = bot; }

std::string ScavTrap::getName() const { return  this->_name; }

ScavTrap& ScavTrap::operator=(ScavTrap const &rhs) {
    this->_hit_p = rhs._hit_p;
    this->_ener_p = rhs._ener_p;
    this->_level = rhs._level;
    this->_name = rhs.getName();
    return *this;
}

void ScavTrap::rangedAttack(std::string const &target) {
    if (!_hit_p)
        this->_fixme();
    else if (_ener_p >= ScavTrap::_ranged_damage) {
        std::cout << CYAN << "\n" << _bot << _name << ", HP: " << _hit_p << ", ENERGY: " << _ener_p \
        << "> [cost of energy for this strike is " << ScavTrap::_ranged_damage << "]" << std::endl;
        _ener_p -= ScavTrap::_ranged_damage;
        std::cout << "[ScavTrap]: <" << _name << ", HP:  " << _hit_p << ", ENERGY: "\
        << _ener_p << "> [attacks <" << target << "> at RANGE, causing <"\
        << ScavTrap::_ranged_damage << "> "\
        << "points of damage!]" << "\n" << CL << std::endl;
    }
}

void ScavTrap::meleeAttack(std::string const &target) {
    if (!_hit_p)
        this->_fixme();
    else if (_ener_p >= ScavTrap::_melle_damage){
        std::cout << CYAN << "\n" << _bot << _name << ", HP: " << _hit_p << ", ENERGY: " << _ener_p \
        << "> [cost of energy for this strike is " << ScavTrap::_melle_damage << "]" << std::endl;
        _ener_p -= ScavTrap::_melle_damage;
        std::cout  << _bot << _name << ", HP: " << _hit_p << ", ENERGY: "\
        << _ener_p << "> [attacks <" << target << "> at MELEE, causing <"\
        << ScavTrap::_melle_damage << "> "\
        << "points of damage!]" << "\n" << CL << std::endl;
    }
    else
        std::cout << YEL << "\n" << "[ScavTrap]: <" << _name << ", HP:  " << _hit_p << ", ENERGY: "\
        << _ener_p << "> [need more energy!!!]" << "\n" << CL << std::endl;

}

void ScavTrap::takeDamage(unsigned int amount) {
    if (((int)amount - (int)ScavTrap::_armor_reduction >= (int)ScavTrap::_max_hit_p) ||\
    (int)amount - (int)ScavTrap::_armor_reduction >= (int)_hit_p) {
        _hit_p = 0;
        _ener_p = 0;
        std::cout << RED <<"\n" << _bot << _name << ", HP: " << _hit_p << ", ENERGY: "\
        << _ener_p  << "> [lol i'm R.I.P]" <<"\n" << CL << std::endl;
    }
    else{
        _hit_p -= (amount <= ScavTrap::_armor_reduction) ? 0 : amount - ScavTrap::_armor_reduction;
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

void ScavTrap::beRepaired(unsigned int amount) {
    if (!_hit_p){
        (_hit_p + amount > ScavTrap::_max_hit_p) ? _hit_p = 100 : _hit_p += amount;
        std::cout << GRN <<"\n" << _bot << _name << ", HP: " << _hit_p << ", ENERGY: " << 0 \
        << "> [oh i'm back, YEAH]" <<"\n" << CL << std::endl;
    }
    else {
        (_hit_p + amount > ScavTrap::_max_hit_p) ? _hit_p = 100 : _hit_p += amount;
        std::cout << GRN << "\n" << _bot << _name << "> HP: " << _hit_p << ", ENERGY: " << _ener_p << "\n" << CL << std::endl;
    }
}

void ScavTrap::moreEnergy(unsigned int amount) {
    if (_ener_p + amount >= ScavTrap::_max_ener_p)
        _ener_p = ScavTrap::_max_ener_p;
    else
        _ener_p = _ener_p + amount;
    std::cout <<"\n" << _bot << _name << ", HP: " << _hit_p << ", ENERGY: "\
        << _ener_p <<"\n" << std::endl;

}

void ScavTrap::_fixme() const {
    for (int i = 0; i < 5; ++i)
        std::cout << RED << _bot << _name << ", HP: R.I.P" << ", ENERGY: "\
        << _ener_p << "> [FIX ME]" << CL << std::endl;
}

void    ScavTrap::challengeNewcomer(void) {
    int num = 0;
    std::string attack[5] = {"Task_1", "Task_2", "Task_3", "Task_4", "Task_5"};
    num = rand() % 5;
    std::cout << "YYYYY it is a " << attack[num] << std::endl;
}
