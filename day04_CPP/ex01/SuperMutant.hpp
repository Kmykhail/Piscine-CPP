/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 20:23:59 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/14 20:24:00 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy{

public:
    SuperMutant(void);
    SuperMutant(int hp, std::string const & type);
    SuperMutant(SuperMutant const & cpy);
    ~SuperMutant();

    SuperMutant &operator=(SuperMutant const & rhs);
    void    takeDamage(int damage);
};
#endif