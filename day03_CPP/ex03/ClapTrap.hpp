/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 13:02:16 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/13 13:02:33 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
#define  ClapTrap_HPP
#include <iostream>
#include <string>
#include <time.h>
#define RED "\033[0;31m"
#define GRN "\033[1;32m"
#define CYAN "\033[0;36m"
#define YEL "\033[1;33m"
#define CL "\033[0m"

class ClapTrap{

protected:
    std::string _name;
    std::string _bot;
    unsigned int _hit_p;
    unsigned int _ener_p;
    unsigned int _level;
    unsigned int _melle_damage;
    unsigned int _ranged_damage;
    unsigned int _armor_reduction;
    unsigned int  _max_ener_p;
    unsigned int _max_hit_p;
    void                _fixme(void) const;

public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const & cpy);
    ~ClapTrap(void);

    ClapTrap & operator=(ClapTrap const & rhs);

    void    rangedAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    moreEnergy(unsigned int amount);

    std::string    getName(void) const ;
    void    setName(std::string name);
    void    setBot(std::string bot);
    void    setAllValue(unsigned int max_hit, unsigned int max_ener, unsigned int level, unsigned int melee, unsigned int ranged, unsigned int armor);

};
#endif