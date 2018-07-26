/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 12:48:21 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/08 12:48:22 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int main(){
    Fixed   a;
    Fixed  const b(10);
    Fixed  const c(42.42f);
    Fixed  const d(b);

    a = Fixed(1234.431f);

    std::cout << "A is " << a  << std::endl;
    std::cout << "B is " << b << std::endl;
    std::cout << "C is " << c << std::endl;
    std::cout << "D is " << d << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
}