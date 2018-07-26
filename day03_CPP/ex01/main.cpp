//
// Created by Kostiantyn MYKHAILENKO on 6/12/18.
//

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(){

    FragTrap	bot1("Johny");
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
    bot2.vaulthunter_dot_exe("Johny");
    bot2.vaulthunter_dot_exe("Johny");
    bot2.moreEnergy(100);
    bot2.vaulthunter_dot_exe("Johny");
    bot2.rangedAttack("Bird");
    bot2.vaulthunter_dot_exe("Johny");
    bot2.vaulthunter_dot_exe("Johny");
    bot1.takeDamage(1);

    std::cout << std::endl << "/******************** SC4V-TP ********************\\" << std::endl << std::endl << "---> Create 2 ScavTrap (default and copy):" << std::endl;
    
	
	
	ScavTrap	bot3("Lara");
    ScavTrap	bot4(bot3);

    bot4.setName("Tommy");

    std::cout << std::endl << "---> Fight with basic attacks:" << std::endl;
    bot3.rangedAttack("Tommt");
    bot4.takeDamage(15);
    bot3.meleeAttack("Tommy");

    std::cout << std::endl << "---> Kill one of the robots:" << std::endl;
    bot4.takeDamage(103);
    bot4.takeDamage(103);

    std::cout << std::endl << "---> Heal one of the robots:" << std::endl;
    bot4.beRepaired(100);
    bot4.beRepaired(100);

    std::cout << std::endl << "---> Try random special challenge:" << std::endl;
    bot4.challengeNewcomer();
    bot4.challengeNewcomer();
    bot4.challengeNewcomer();

    std::cout << std::endl << "---> End of treatment." << std::endl;
    return 0;
}
