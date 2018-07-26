/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 17:24:11 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/14 17:24:12 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) {
    setName("Classic");
    setTitle("Default");
    std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _title(title), _name(name){
    std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &cpy) { *this = cpy; }

Sorcerer& Sorcerer::operator=(Sorcerer const &rhs) {
    this->_name = rhs.getName();
    this->_title = rhs.getTitle();
    return *this;
}

void Sorcerer::setTitle( std::string title) { _title = title; }
void Sorcerer::setName(std::string name) { _name = name; }

void Sorcerer::polymorph(Victim const & rhs) const {
    rhs.getPolymorphed();
}

std::string Sorcerer::getName() const { return this->_name; }
std::string Sorcerer::getTitle() const { return  this->_title; }
std::string Sorcerer::getIntroduce() const {
    std::string introduce = "I am ";
    introduce += getName();
    introduce += ", ";
    introduce += getTitle();
    introduce += ", and I like ponies !\n";
    return introduce;
}

Sorcerer::~Sorcerer() {
    std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs){
    o << rhs.getIntroduce();
    return o;
}