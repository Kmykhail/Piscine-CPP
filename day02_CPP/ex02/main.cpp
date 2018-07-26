/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 17:25:36 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/20 10:39:31 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int main(){
    Fixed   a;
    Fixed const  b(Fixed(5.05f) * Fixed(2));
    Fixed   c(Fixed(2.12f) / Fixed(3.12f));
    Fixed   d(Fixed(0.45f) - Fixed(2.12f));
    Fixed   g(Fixed(1.5 + 1.5));
    std::cout << "G is: " << g << std::endl;

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << b << std::endl;

    std::cout << '\n' << "Max Tets" << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;
    std::cout << ++a << std::endl;
    std::cout << '\n' << "Min Tets" << std::endl;
    std::cout << Fixed::min(a, b) << std::endl;

    std::cout << b << std::endl;

    std::cout << "\n" << c << std::endl;
    std::cout << "\n" << d << std::endl;

    d = (Fixed(12.45f) * (Fixed(0.8f) - (Fixed(1) * Fixed(3.91))));
	std::cout << "D: " << d << std::endl;
    std::cout << a << std::endl;
    a = d;
    std::cout << a << std::endl;
    if (a > b)
        std::cout << "a is biger" << std::endl;
    if (a != b)
        std::cout << "a is not equal" << std::endl;
    return 0;
}
