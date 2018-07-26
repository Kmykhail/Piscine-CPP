/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 21:33:53 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/04 21:33:54 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "HumanA.hpp"

class HumanB{

private:
    std::string _name;
    Weapon* _hb;
public:
    HumanB(std::string  name);
    ~HumanB(void);

    void    setWeapon(Weapon& wpn);
    void    attack(void);
};
#endif