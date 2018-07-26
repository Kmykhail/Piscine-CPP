/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 17:58:13 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/20 10:15:07 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(Fixed const & cpy){
    std::cout << "Copy constructor called" << std::endl;
    *this = cpy;
}

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed  &  Fixed::operator=(Fixed  const & cpy){
    std::cout << "Assignation operator called" << std::endl;
    if (this != &cpy)
        this->_raw = cpy.getRawBits();
    return *this;
}

int     Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_raw;
}

void    Fixed::setRawBits(int const raw){
    this->_raw = raw;
}
