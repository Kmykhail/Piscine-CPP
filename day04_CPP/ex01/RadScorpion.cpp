/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 20:24:21 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/14 20:24:23 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RadScorpion.hpp"

RadScorpion::RadScorpion() {
    std::cout << "* click click click *" << std::endl;
    setHP(80);
    setType("RadScorpion");
}

RadScorpion::RadScorpion(int hp, std::string const &type) : Enemy(hp, type){
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &cpy) {
    *this = cpy;
}

RadScorpion::~RadScorpion() {
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion& RadScorpion::operator=(RadScorpion const &rhs) {
    this->_hp = rhs.getHP();
    this->_type = rhs.getType();
    return *this;
}