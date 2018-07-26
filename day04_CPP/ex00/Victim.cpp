/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 17:24:18 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/14 17:24:20 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim() {
    setName("Classic");
    std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::Victim(std::string name) : _name(name) {
    std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::Victim(Victim const &cpy) { *this = cpy; }

Victim::~Victim() {
    std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

Victim& Victim::operator=(Victim const &rhs) {
    this->_name = rhs.getName();
    return *this;
}
void Victim::setName(std::string name) { _name = name;}

std::string Victim::getName() const { return this->_name; }

std::string Victim::getIntroduce() const {
    std::string introduce = "i'm ";
    introduce += _name;
    introduce += " and I like otters !\n";
    return introduce;
}

void Victim::getPolymorphed() const {
    std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Victim const & rhs){
    o << rhs.getIntroduce();
    return o;
}