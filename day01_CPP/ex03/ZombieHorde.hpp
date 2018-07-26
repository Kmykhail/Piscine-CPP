/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 14:52:10 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/04 14:52:11 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP
#include "Zombie.hpp"

class ZombieHorde{

private:
    int _cnt;
    Zombie  *_z;

public:
    ZombieHorde(int n);
    ~ZombieHorde();

    void    announce(void);
    std::string randomChump();
};
#endif