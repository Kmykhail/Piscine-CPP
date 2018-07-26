/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 20:25:11 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/14 20:25:12 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character{

private:
    Enemy   *_en;
    AWeapon *_aw;
    static const int AP;
protected:
    std::string _name;
    int _action_point;
public:
    Character(void);
    Character(std::string const & name);
    Character(Character const & cpy);
    ~Character(void);

    Character &operator=(Character const & rhs);
    void    recoverAP();
    void    equip(AWeapon* some);
    void    attack(Enemy* some);
    std::string     getName(void) const ;
    Enemy*  getEnemy() const;
    AWeapon* getWeapon() const;
    int     getApoints() const;
};

std::ostream & operator<<(std::ostream & o, Character const & rhs);
#endif