/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 17:24:51 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/08 17:24:52 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
#include <iostream>
#include <string>
#include <cmath>

class Fixed{

private:
    int                 _raw;//0
    static const int    _bit = 8;

public:
    Fixed(void);
    Fixed(float const f_val);
    Fixed(Fixed const & cpy);
    ~Fixed(void);

    bool operator>(Fixed const & rhs);
    bool operator<(Fixed const & rhs);
    bool operator>=(Fixed const & rhs);
    bool operator<=(Fixed const & rhs);
    bool operator==(Fixed const & rhs);
    bool operator!=(Fixed const & rhs);

    Fixed   operator+(Fixed const & rhs);
    Fixed   operator-(Fixed const & rhs);
    Fixed   operator*(Fixed const & rhs);
    Fixed   operator/(Fixed const & rhs);

    Fixed &operator=(Fixed const & rhs);

    Fixed & operator++();//pre
    Fixed  operator++( int );//post

    Fixed & operator--();//pre
    Fixed  operator--(int);//post

    static Fixed & min(Fixed & val_1, Fixed & val_2); 
    static Fixed const & min(Fixed const & rhs_1, Fixed const & rhs_2);

    static Fixed & max(Fixed & val_1, Fixed & val_2);
    static Fixed const & max(Fixed const & rhs_1, Fixed const & rhs_2);

    float   toFloat(void) const;

    int getRawBits(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
#endif