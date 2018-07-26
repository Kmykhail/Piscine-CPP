/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 21:33:42 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/04 21:33:43 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string  name) : _name(name){
}

HumanB::~HumanB(){
}

void    HumanB::setWeapon(Weapon&   wpn){
    this->_hb = &wpn;
}

void    HumanB::attack(){
    std::cout << this->_name << " attacks with his "
    << this->_hb->getType() << std::endl;
}