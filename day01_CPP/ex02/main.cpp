/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 19:24:18 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/02 19:24:20 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <stdlib.h>
#include <time.h>

void    randomChump(){
     std::string z_array_name[20] = {"John", "Tod", "Billy", "Tony",
    "Lil", "Kim", "Ron", "Kate", "Wik", "Sam" , "Dean", "Rose", "Dilan",
    "Moo", "Bart", "Lisa", "Rick", "Morty", "Scot", "Megan"};
    ZombieEvent event_1;
    event_1.setZombieType("random");
    Zombie* zomb = event_1.newZombie(z_array_name[rand() % 20]);
    delete zomb;
}

int     main(){
    srand (time(NULL));
    Zombie z;
    z.setNameType("Toto", "slow");
    randomChump();
    return 0;
}