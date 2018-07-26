/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 21:34:00 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/04 21:34:01 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

int main(){
    Weapon  club_1 = Weapon("crude club");
    HumanA  bob_1("Bob", club_1);
    bob_1.attack();
    club_1.setType("some other type of club");
    bob_1.attack();

    Weapon  club_2 = Weapon("crude club");
    HumanB  bob_2("Jim");
    bob_2.setWeapon(club_2);
    bob_2.attack();
    club_2.setType("some other type of club");
    bob_2.attack();
}