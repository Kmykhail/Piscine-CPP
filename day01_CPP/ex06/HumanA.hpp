/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 21:33:35 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/04 21:33:36 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA{

private:
    std::string _name;
    Weapon* _wp;
public:
    HumanA(std::string nm, Weapon& wpn);
    ~HumanA(void);

    void    attack(void);
};
#endif