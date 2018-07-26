/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 19:32:37 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/21 11:49:06 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

int main(){
	std::cout << "---> Create 2 FragTrap (default and copy):" << std::endl;
    FragTrap	bot1("Toto");
    FragTrap	bot2(bot1);

    srand(time(NULL));
    bot2.setName("Bob");

    std::cout << std::endl << "---> Fight with basic attacks:" << std::endl;
    bot1.rangedAttack("Bob");
    bot2.takeDamage(20);
    bot1.meleeAttack("Bota");
    bot2.takeDamage(30);

    std::cout << std::endl << "---> Kill one of the robots:" << std::endl;
    bot2.takeDamage(105);
    bot2.takeDamage(105);

    std::cout << std::endl << "---> Heal one of the robots:" << std::endl;
    bot2.beRepaired(100);
    bot2.beRepaired(100);

    std::cout << std::endl << "---> Use random special attacks:" << std::endl;
    bot2.vaulthunter_dot_exe("Steven");
    bot2.vaulthunter_dot_exe("Steven");
    bot2.moreEnergy(100);
    bot2.vaulthunter_dot_exe("Steven");
    bot2.rangedAttack("Bird");
	std::cout << "random crap must work" << std::endl;
    bot2.vaulthunter_dot_exe("Quiz");
    bot2.vaulthunter_dot_exe("Quiz");
	bot2.moreEnergy(100);
	bot2.vaulthunter_dot_exe("Quiz");
    bot1.takeDamage(1);
    return 0;
}
