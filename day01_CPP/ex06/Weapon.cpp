/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 21:30:56 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/04 21:30:57 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string w_type){
    this->setType(w_type);
}

Weapon::~Weapon(){
}

const   std::string&    Weapon::getType() const{
    return  this->_type;
}

void    Weapon::setType(std::string str){
    this->_type = str;
}
