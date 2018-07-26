/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 19:32:26 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/12 21:16:27 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <iostream>
#include <string>
#include <time.h>
#define BOT "[FR4G-TP]: <"
#define RED "\033[0;31m"
#define GRN "\033[1;32m"
#define CYAN "\033[0;36m"
#define YEL "\033[1;33m"
#define CL "\033[0m"

class FragTrap{

protected:
    std::string _name;
    std::string _bot;
    unsigned int _hit_p;
    unsigned int _ener_p;
    unsigned int _level;
    static unsigned int _melle_damage;
    static unsigned int _ranged_damage;
    static unsigned int _armor_reduction;
    static unsigned int  _max_ener_p;
    static unsigned int _max_hit_p;
    void                _fixme(void) const;

public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(FragTrap const & cpy);
    ~FragTrap(void);

    FragTrap & operator=(FragTrap const & rhs);

    void    rangedAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    moreEnergy(unsigned int amount);

    std::string    getName(void) const ;
    void    setName(std::string name);
    void    setBot(std::string bot);

    void    vaulthunter_dot_exe(std::string const & target);
};

#endif
