/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 14:51:35 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/04 14:51:36 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
}

Zombie::~Zombie(){
    std::cout << "Zombie " << this->_name << " die" <<std::endl;
}

void    Zombie::setNameType(std::string name, std::string type){
    this->_name = name;
    this->_type = type;
    this->announce();
}

void    Zombie::announce(){
    std::cout << "Name: " << this->_name << ", type: " << this->_type << ", Braiiinnnsss" 
    << std::endl;
}
