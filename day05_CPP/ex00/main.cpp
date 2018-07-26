/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 15:15:53 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/25 15:15:55 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat br_("Vova", 0);
        std::cout << br_ << std::endl;
        br_.incrmGrade();
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat br_0("Sosa", 150);
        std::cout << br_0 << std::endl;
        br_0.decrmGrade();
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat br_1("Tl9", 40);
        std::cout << br_1 << std::endl;
        br_1.decrmGrade();
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat br_2("KOKO", 149);
        std::cout << br_2 << std::endl;
        br_2.decrmGrade();
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
