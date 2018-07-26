/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 20:23:03 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/14 20:23:05 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon{

public:
    PlasmaRifle(void);
    PlasmaRifle(std::string const &name, int apcost, int damage);
    PlasmaRifle(PlasmaRifle const & cpy);
    ~PlasmaRifle(void);

    PlasmaRifle &operator=(PlasmaRifle const & rhs);
    void    attack(void) const;
};

#endif