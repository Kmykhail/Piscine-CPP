/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 17:23:56 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/14 17:23:57 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon() {
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name) : Victim(name) {
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
    std::cout << "Bleuark..." << std::endl;
}

Peon& Peon::operator=(Peon const &rhs) {
    this->_name = rhs.getName();
    return  *this;
}

void Peon::getPolymorphed() const {
    std::cout << _name << " has been turned into a pink pony !" << std::endl;
}