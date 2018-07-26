/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 17:58:02 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/06 17:58:03 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
#include <iostream>
#include <string>

class Fixed{

private:

    int _raw;
    static const int _bits = 8;

public:

    Fixed(Fixed const & cpy);
    ~Fixed();
    Fixed(void);

    Fixed  & operator =(Fixed const & cpy);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};
#endif