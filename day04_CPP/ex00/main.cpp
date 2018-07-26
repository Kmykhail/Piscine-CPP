/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 17:23:41 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/14 17:23:42 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Peon.hpp"
#include "Sorcerer.hpp"

int main(){

    Sorcerer robert(  "Robert"  ,   "the Magnificent"  );
    Victim jim(  "Jimmy"  );
    Peon joe(  "Joe"  );

    std::cout << robert << jim << joe;


    robert.polymorph(jim);
    robert.polymorph(joe);
}