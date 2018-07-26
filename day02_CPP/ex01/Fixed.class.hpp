/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 12:47:45 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/08 12:47:54 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
#include <iostream>
#include <string>
#include <cmath>

class   Fixed{

private:
    int                 _raw;
    static const int    _bit = 8;
public:
    Fixed(void);
    Fixed(Fixed const & rhs);
    Fixed(int const i_val);
    Fixed(float const f_val);
    ~Fixed(void);
    Fixed & operator=(Fixed const & rhs);
    float   toFloat(void) const;
    int     toInt(void) const;
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};

std::ostream & operator <<(std::ostream & o, Fixed const & rhs);
#endif