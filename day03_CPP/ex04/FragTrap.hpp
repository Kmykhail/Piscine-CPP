/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 19:32:26 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/11 19:32:27 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap{

public:
    FragTrap(void);
    FragTrap(FragTrap const & cpy);
    FragTrap(std::string name);
    ~FragTrap(void);

    FragTrap & operator=(FragTrap const & rhs);
    void    rangedAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
    void    vaulthunter_dot_exe(std::string const & target);
    void    setName(std::string name);
};

#endif