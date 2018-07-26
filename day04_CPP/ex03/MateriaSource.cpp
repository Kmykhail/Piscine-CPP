/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:50:16 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/18 12:50:17 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4 ; ++i)
        _mat[i] = nullptr;
}

MateriaSource::~MateriaSource() {
}

MateriaSource::MateriaSource(MateriaSource const &cpy) { *this = cpy; }

MateriaSource& MateriaSource::operator=(MateriaSource const &rhs) {
    (void)rhs;
    return *this;
}

void MateriaSource::learnMateria(AMateria *m) {
    int i = 0;
    while (_mat[i] != nullptr && i < 4)
        i++;
    _mat[i] = m;
}

AMateria* MateriaSource::createMaterial(std::string const &type) {
    int i = 0;
    bool check = false;
    while (i < 4) {
        if ( _mat[i] && type == _mat[i]->getType()){
            check = true;
            break;
        }
        i++;
    }
    return ((check) ? _mat[i] : nullptr);
}



