/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 21:33:13 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/04 21:33:14 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon{

private:
    std::string _type;
public:
    Weapon(std::string  w_type);
    ~Weapon(void);

    const std::string&  getType(void) const;
    void    setType(std::string str);
};
#endif