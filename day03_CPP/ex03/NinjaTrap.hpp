/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 17:39:31 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/13 17:39:32 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>
#include <time.h>


class NinjaTrap : public ClapTrap{

public:
    NinjaTrap(void);
    NinjaTrap(NinjaTrap const & cpy);
    NinjaTrap(std::string nm);
    ~NinjaTrap();

    NinjaTrap & operator=(NinjaTrap const & rhs);
    void    rangedAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
    void    setName(std::string name);

    void    ninjaShoebox(FragTrap const & target);
    void    ninjaShoebox(ScavTrap const & target);
    void    ninjaShoebox(NinjaTrap const & target);
};

#endif