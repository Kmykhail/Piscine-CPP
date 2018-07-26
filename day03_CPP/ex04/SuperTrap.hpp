/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 20:19:40 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/13 20:19:41 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap{

public:
    SuperTrap(void);
    SuperTrap(std::string nm);
    SuperTrap(SuperTrap const & cpy);
    ~SuperTrap(void);

    SuperTrap &  operator=(SuperTrap const & rhs);
    void    rangedAttack(std::string const & target);
    void    meleeAttack(std::string const & tar);
    void    setName(std::string name);
};

#endif