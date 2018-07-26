/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 19:23:59 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/02 19:24:01 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(){
}
ZombieEvent::~ZombieEvent(){
}

void    ZombieEvent::setZombieType(std::string new_type){
    this->_z_type = new_type;
}

Zombie* ZombieEvent::newZombie(std::string name){
    Zombie  *zzz = new Zombie;
    zzz->setNameType(name, this->_z_type);
    return zzz;
}