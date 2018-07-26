/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 13:20:06 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/28 14:31:02 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
template <typename T>

void    swap(T *a, T *b){
    T tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    std::cout << "---SWAP---" << std::endl;
}

template <typename T>

T       min(T a1, T a2){
    if (a1 < a2 || a2 < a1)
        return ((a1 < a2) ? a1 : a2);
    return ((a1 == a2) ? a2 : a1);
}

template <typename T>
T       max(T a1, T a2){
    if (a1 > a2 || a2 > a1)
        return ((a1 > a2) ? a1 : a2);
    return ((a1 == a2) ? a2 : a1);
}

int main( void ) { 
    int a = 2;
int b = 3;

std::cout << "No_swap-> " << "a: " << a << "b: " << b << std::endl;
swap(&a, &b);
std::cout << "YA_swap-> " << "a: " << a << "b: " << b << std::endl;
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;



std::string c = "chaine1";
std::string d = "chaine2";


std::cout << "No_swap-> " << "c: " << c << "d: " << d << std::endl;
swap(&c, &d);
std::cout << "YA_swap-> " << "c: " << c << "d: " << d << std::endl;
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0; }