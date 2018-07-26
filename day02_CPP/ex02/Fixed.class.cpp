/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 17:24:58 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/20 10:37:41 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(){ _raw = 0; }

Fixed::Fixed(float const f_val){ this->_raw = roundf(f_val *  (1 << Fixed::_bit)); }

Fixed::Fixed(Fixed const & cpy){ *this = cpy; }

Fixed::~Fixed(void){}

int     Fixed::getRawBits() const { return  this->_raw; }

bool    Fixed::operator>(Fixed const & rhs){ return this->_raw > rhs.toFloat(); }

bool    Fixed::operator<(Fixed const & rhs){ return this->_raw < rhs.toFloat(); }

bool    Fixed::operator>=(Fixed const & rhs){ return this->_raw >= rhs.toFloat(); }

bool    Fixed::operator<=(Fixed const & rhs){ return this->_raw <= rhs.toFloat(); }

bool    Fixed::operator==(Fixed const & rhs){ return this->_raw == rhs.toFloat(); }

bool    Fixed::operator!=(Fixed const & rhs){ return this->_raw != rhs.toFloat(); }

Fixed   Fixed::operator+(Fixed const &rhs){ return (Fixed(this->toFloat() + rhs.toFloat())); }

Fixed  Fixed::operator-(Fixed const & rhs){ return (Fixed(this->toFloat() - rhs.toFloat())); }

Fixed   Fixed::operator*(Fixed const &rhs){ return (Fixed(this->toFloat() * rhs.toFloat())); }

Fixed   Fixed::operator/(Fixed const & rhs){ return (Fixed(this->toFloat() / rhs.toFloat())); }

Fixed & Fixed::operator=(Fixed const &rhs) {
    if (this != &rhs)
        this->_raw = rhs.getRawBits();
    return  *this;
}

Fixed  & Fixed::operator++(){//pre
    _raw += 1;
    return *this;
}

Fixed & Fixed::operator--(){ //pre
    _raw -= 1;
    return  *this;
}

Fixed   Fixed::operator++(int){//post
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed   Fixed::operator--(int){
    Fixed tmp(*this);
    operator--();
    return tmp;
}

Fixed & Fixed::max(Fixed & val_1, Fixed & val_2){
    if (val_1.toFloat() > val_2.toFloat())
        return  val_1;
    else if (val_2.toFloat() > val_1.toFloat())
        return  val_2;
    return val_1;
}

Fixed const & Fixed::max(Fixed const & rhs_1, Fixed const & rhs_2){
    if (rhs_1.toFloat() > rhs_2.toFloat())
        return rhs_1;
    else if (rhs_2.toFloat() > rhs_1.toFloat())
        return  rhs_2;
    return  rhs_1;
}

Fixed & Fixed::min(Fixed &val_1, Fixed &val_2) {
    if (val_1.toFloat() < val_2.toFloat())
        return  val_1;
    else if (val_2.toFloat() < val_1.toFloat())
        return val_2;
    return val_1;
}

Fixed const & Fixed::min(Fixed const & rhs_1, Fixed const & rhs_2){
      if (rhs_1.toFloat() < rhs_2.toFloat())
          return rhs_1;
      else if (rhs_2.toFloat() < rhs_1.toFloat())
          return  rhs_2;
    return  rhs_1;
}

float   Fixed::toFloat(void) const{ return static_cast <float>(this->_raw) / (1 << Fixed::_bit); }

std::ostream & operator<<(std::ostream & o, Fixed const & rhs){
    o << rhs.toFloat();
    return o;
}
