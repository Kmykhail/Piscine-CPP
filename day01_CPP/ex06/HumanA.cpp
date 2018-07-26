/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 21:33:27 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/04 21:33:28 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string  nm, Weapon& wpn) : _name(nm), _wp(&wpn){
}

HumanA::~HumanA(){
}

void    HumanA::attack(){
    std::cout << this->_name << " attacks with his "
    << this->_wp->getType() << std::endl;
}
