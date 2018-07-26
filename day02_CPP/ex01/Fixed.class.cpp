/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 12:48:07 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/20 10:23:36 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & rhs){
    std::cout << "Copy constructor called" << std::endl;
    *this = rhs;
}

Fixed::Fixed(int const i_val){
    std::cout << "Int constructor called" << std::endl;
    this->_raw = i_val * ( 1 << Fixed::_bit);
}

Fixed::Fixed(float const f_val){
    std::cout << "Float constructor called" << std::endl;
    this->_raw = roundf(f_val *  (1 << Fixed::_bit));
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs){
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
        this->_raw = rhs.getRawBits();
    return *this;
}

float   Fixed::toFloat(void) const{
    return static_cast <float>(this->_raw) / (1 << Fixed::_bit);
}

int     Fixed::toInt(void) const{
    return  this->_raw / (1 << Fixed::_bit);
}

int     Fixed::getRawBits(void) const{
    return this->_raw;
}

std::ostream & operator <<(std::ostream & o, Fixed const & rhs){
    o << rhs.toFloat();
    return o;
}
