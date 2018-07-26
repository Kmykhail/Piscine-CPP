/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:49:31 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/18 12:49:32 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter{
private:
    int         _cnt_mat;
    std::string _name;
    AMateria*   _invent[4];
public:
    Character();
    Character(std::string name);
    Character(Character const & cpy);
    ~Character();

    Character &operator=(Character const &rhs);
    std::string const  &getName() const;
    void    equip(AMateria* m);
    void    unequip(int idx);
    void    use(int idx, ICharacter& target);
};

#endif