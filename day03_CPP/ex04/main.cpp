/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 20:18:49 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/13 20:18:50 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

int main(){
    srand(time(NULL));
    std::cout << "/******************** FR4G-TP ********************\\" << std::endl << std::endl << "---> Create 2 SuperTrap (default and copy):" << std::endl;
    SuperTrap    robot1("Steven");
    SuperTrap    robot2("Koko");
    NinjaTrap    robot5("ToTo");


    std::cout << std::endl << "---> Fight with basic attacks:" << std::endl;
    robot1.rangedAttack("Bob");
    robot2.takeDamage(20);
    robot1.meleeAttack("Bob");
    robot2.takeDamage(30);

    std::cout << std::endl << "---> Kill one of the robots:" << std::endl;
    robot2.takeDamage(105);
    robot2.takeDamage(105);

    std::cout << std::endl << "---> Heal one of the robots:" << std::endl;
    robot2.beRepaired(100);
    robot2.beRepaired(100);

    std::cout << std::endl << "---> USEEEEE random special attacks:" << std::endl;
    robot2.vaulthunter_dot_exe("Steven");
    robot2.moreEnergy(100);
    robot2.vaulthunter_dot_exe("Steven");
    robot2.vaulthunter_dot_exe("Steven");
    robot2.vaulthunter_dot_exe("Steven");
    robot2.vaulthunter_dot_exe("Steven");

    robot2.ninjaShoebox(robot5);
    robot1.takeDamage(1);
    
    return 0;
}