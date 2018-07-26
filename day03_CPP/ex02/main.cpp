/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 13:14:21 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/13 13:14:22 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(){
    std::cout << "/******************** FR4G-TP ********************\\" << std::endl << std::endl << "---> Create 2 FragTrap (default and copy):" << std::endl;
    FragTrap	robot1("Steven");
    FragTrap	robot2(robot1);

    srand(time(NULL));
    robot2.setName("Bob");

    std::cout << std::endl << "---> Fight with basic attacks:" << std::endl;
    robot1.rangedAttack("Bob");
    robot2.takeDamage(20);
    robot1.meleeAttack("Bota");
    robot2.takeDamage(30);

    std::cout << std::endl << "---> Kill one of the robots:" << std::endl;
    robot2.takeDamage(105);
    robot2.takeDamage(105);

    std::cout << std::endl << "---> Heal one of the robots:" << std::endl;
    robot2.beRepaired(100);
    robot2.beRepaired(100);

    std::cout << std::endl << "---> Use random special attacks:" << std::endl;
    robot2.vaulthunter_dot_exe("Steven");
    robot2.vaulthunter_dot_exe("Steven");
    robot2.moreEnergy(100);
    robot2.vaulthunter_dot_exe("Steven");
    robot2.rangedAttack("Bird");
    robot2.vaulthunter_dot_exe("Steven");
    robot2.vaulthunter_dot_exe("Steven");
    robot1.takeDamage(1);

    std::cout << std::endl << "/******************** SC4V-TP ********************\\" << std::endl << std::endl << "---> Create 2 ScavTrap (default and copy):" << std::endl;
    ScavTrap	robot3("Stuart");
    ScavTrap	robot4(robot3);

    srand(time(NULL));
    robot4.setName("Dave");

    std::cout << std::endl << "---> Fight with basic attacks:" << std::endl;
    robot3.rangedAttack("Dave");
    robot4.takeDamage(15);
    robot3.meleeAttack("Dave");

    std::cout << std::endl << "---> Kill one of the robots:" << std::endl;
    robot4.takeDamage(103);
    robot4.takeDamage(103);

    std::cout << std::endl << "---> Heal one of the robots:" << std::endl;
    robot4.beRepaired(100);
    robot4.beRepaired(100);

    std::cout << std::endl << "---> Try random special challenge:" << std::endl;
    robot4.challengeNewcomer();
    robot4.challengeNewcomer();
    robot4.challengeNewcomer();

    std::cout << std::endl << "---> End of treatment." << std::endl;
    return 0;
}