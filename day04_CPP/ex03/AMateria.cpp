/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:48:35 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/18 12:48:36 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
    xp_ = 0;
}

AMateria::AMateria(std::string const &type){
    xp_ = 0;
    for (int i = 0; type[i]; ++i)
        _type.push_back(tolower(type[i]));
}

AMateria::~AMateria() {}

AMateria::AMateria(AMateria const &cpy) {
    *this = cpy;
}

std::string const& AMateria::getType() const { return this->_type; }

unsigned int AMateria::getXP() const { return  this->xp_; }

void AMateria::use(ICharacter &target) {
    xp_+= 10;
    if (getType() == "cure")
        std:: cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
    else if (getType() == "ice")
        std::cout << "* shoots an ice bolt at " << target.getName() \
        << " *" << std::endl;
}
