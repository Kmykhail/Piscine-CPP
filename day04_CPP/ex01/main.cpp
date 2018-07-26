/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 20:26:02 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/14 20:26:03 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Character.hpp"

int main(){
    /*Character *zaz = new Character("zaz");
    std::cout << *zaz;
    Enemy *b = new RadScorpion();
    Enemy *c = new RadScorpion();
    Enemy *d = new RadScorpion();
    Enemy  *q = new SuperMutant();
    AWeapon *pr = new PlasmaRifle();
    AWeapon *pf = new PowerFist();

    zaz->equip(pr);
    std::cout << *zaz;
    zaz->equip(pf);
    zaz->attack(b);
    std::cout << *zaz;
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;

    std::cout << "\n\n";

    zaz->attack(c);
    std::cout << *zaz;
    zaz->attack(c);
    std::cout << *zaz;
    zaz->attack(c);
    std::cout << *zaz;
    zaz->attack(c);

    std::cout << "\n\n";
    std::cout << *zaz;
    zaz->attack(d);
    std::cout << *zaz;
    zaz->recoverAP();
    zaz->attack(d);
    std::cout << *zaz;
    zaz->attack(d);
    std::cout << *zaz;
    std::cout << "\n\n";

    std::cout << *zaz;
    zaz->attack(q);
    std::cout << q->getHP() << std::endl;
    zaz->recoverAP();
    zaz->recoverAP();
    zaz->recoverAP();
    zaz->recoverAP();
    zaz->recoverAP();
    zaz->equip(pf);
    std::cout << *zaz;
    zaz->recoverAP();
    zaz->attack(q);
    std::cout << q->getHP() << std::endl;
    std::cout << *zaz;
    zaz->attack(q);
    std::cout << *zaz;
    zaz->attack(q);
    std::cout << *zaz;
    zaz->attack(q);
    std::cout << *zaz;*/


    Character* zaz = new Character("zaz");
    std::cout << *zaz;
    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->equip(pf);
    zaz->attack(b);
    std::cout << *zaz;
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    return 0;
}