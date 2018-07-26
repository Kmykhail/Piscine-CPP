/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 20:22:47 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/14 20:22:48 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include "iostream"
#include "string"

class AWeapon{

protected:
    std::string _name;
    int         _apcost;
    int         _damage;

public:
    AWeapon(void);
    AWeapon(AWeapon const & cpy);
    AWeapon(std::string const & name, int damage , int apcost);
    ~AWeapon(void);

    AWeapon & operator=(AWeapon const & rhs);
    std::string getName(void) const;
    int getAPCost(void) const;
    int getDamage(void) const;
    void    setName(std::string name);
    void    setApcost(int apcost);
    void    setDamage(int damage);

    virtual void    attack(void) const = 0;
};
#endif