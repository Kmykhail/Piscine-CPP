/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 13:02:16 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/13 13:02:33 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DAY03_SCAVTRAP_HPP
#define DAY03_SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

public:
    ScavTrap(void);
    ScavTrap(ScavTrap const & cpy);
    ScavTrap(std::string nm);
    ~ScavTrap();

    ScavTrap & operator=(ScavTrap const & rhs);
    void    rangedAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
    void    challengeNewcomer(void);
    void    setName(std::string name);
};


#endif //DAY03_SCAVTRAP_H
