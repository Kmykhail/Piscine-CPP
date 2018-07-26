/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 21:40:39 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/27 21:40:39 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void    identify_from_pointer(Base *p){
    if (dynamic_cast<A*>(p))
        std::cout << typeid(p).name() << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << typeid(p).name() << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << typeid(p).name() << std::endl;
}

void identify_from_reference( Base & p ){
    if (dynamic_cast<A*>(&p))
        std::cout << typeid(p).name() << std::endl;
    else if (dynamic_cast<B*>(&p))
        std::cout << typeid(p).name() << std::endl;
    else if (dynamic_cast<C*>(&p))
        std::cout << typeid(p).name() << std::endl;
}

Base*   generate(void){
    int i = rand() % 3;
    Base    *arr[3];
    arr[0] = dynamic_cast<Base*>(new A);
    arr[1] = dynamic_cast<Base*>(new B);
    arr[2] = dynamic_cast<Base*>(new C);
    return (arr[i]);
}

int main(){
    srand((unsigned) time(NULL));
    Base    *ptr;
    ptr = generate();
    identify_from_pointer(ptr);
    identify_from_reference(*ptr);
    delete ptr;
    return 0;
}