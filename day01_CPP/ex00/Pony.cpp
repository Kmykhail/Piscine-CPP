/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 20:19:09 by kmykhail          #+#    #+#             */
/*   Updated: 2018/05/31 20:19:10 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Pony.hpp"

Pony::Pony(std::string name) : _nick(name){
}

Pony::~Pony(){
    std::cout << "Pony " << this->_nick << " will be simple horse" << std::endl; 
}

std::string     Pony::getPony(){
    return this->_nick;
}