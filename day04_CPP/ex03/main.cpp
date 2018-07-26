/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:50:44 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/18 12:50:45 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"

int main(){
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* zaz = new Character("zaz");
    ICharacter* pop = new Character("pop");

    AMateria* tmp;
    AMateria* tmp_2;

    tmp = src->createMaterial("ice");
    zaz->equip(tmp);
    tmp = src->createMaterial("cure");
    zaz->equip(tmp);

    tmp_2 = src->createMaterial("ice");
    pop->equip(tmp_2);
    tmp_2 = src->createMaterial("cure");
    pop->equip(tmp_2);

    zaz = pop;
    ICharacter* bob = new Character("bob");
    zaz->use(0, *bob);
    zaz->use(1, *bob);

    zaz->unequip(1);

    pop->unequip(0);

    delete bob;
    delete zaz;
    delete src;
    return 0;
}