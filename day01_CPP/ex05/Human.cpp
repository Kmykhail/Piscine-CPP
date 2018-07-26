/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 17:59:55 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/05 12:12:09 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void){
}	
Human::~Human(void){
}

const Brain &	Human::getBrain() const{ return this->_qw; }

std::string	Human::identify() const{ return (this->_qw.identify());}
