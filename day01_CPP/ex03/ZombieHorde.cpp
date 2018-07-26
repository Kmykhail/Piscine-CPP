/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 14:51:57 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/04 14:51:59 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _cnt(n){
    this->_z = new Zombie[this->_cnt];
    for(int i = 0; i < this->_cnt; i++)
        this->_z[i].setNameType(this->randomChump(), "random");
}

ZombieHorde::~ZombieHorde(){
    delete [] this->_z;
}

std::string ZombieHorde::randomChump(){
    std::string z_array_name[20] = {"John", "Tod", "Billy", "Tony",
    "Lil", "Kim", "Ron", "Kate", "Wik", "Sam" , "Dean", "Rose", "Dilan",
    "Moo", "Bart", "Lisa", "Rick", "Morty", "Scot", "Megan"};
    return z_array_name[rand() % 20];
}