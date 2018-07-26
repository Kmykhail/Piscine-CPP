/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:50:26 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/18 12:50:27 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class AMateria;

class ICharacter{
public:
    virtual ~ICharacter(){}
    virtual std::string const &getName() const = 0;
    virtual void    equip(AMateria* m) = 0;
    virtual void    unequip(int idx) = 0;
    virtual void    use(int idx, ICharacter& target) = 0;
};
#endif