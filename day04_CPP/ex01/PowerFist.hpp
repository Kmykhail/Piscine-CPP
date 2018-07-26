/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 20:23:24 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/14 20:23:26 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIRST_HPP
#define POWERFIRST_HPP
#include "AWeapon.hpp"

class PowerFist : public AWeapon{

public:
    PowerFist(void);
    PowerFist(std::string const &name, int apcost, int damage);
    PowerFist(PowerFist const &rhs);
    ~PowerFist(void);

    PowerFist &operator=(PowerFist const & rhs);
    void    attack(void) const;
};
#endif