/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 16:57:58 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/29 16:57:59 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(){
    srand((unsigned int)time(NULL));
    Span sp = Span(5);

    std::cout << "Simple: " << std::endl;
    try {
        sp.addNumber(18);
        sp.addNumber(30);
        sp.addNumber(-14);
        sp.addNumber(2);
        sp.addNumber(20);
        std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest" << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }

    std::cout << "-------------" << std::endl;
    Span tp = Span(4);
    try {
        tp.addNumber(20);
        tp.addNumber(11);
        tp.addNumber(45);
        tp.addNumber(18);
        tp.addNumber(4);
        std::cout << tp.shortestSpan() << std::endl;
        std::cout << tp.longestSpan() << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }

    std::cout << "-------------" << std::endl;

    Span rp = Span(1);
    try {
        rp.addNumber(5);
        std::cout << rp.shortestSpan() << std::endl;
        std::cout << rp.longestSpan() << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}