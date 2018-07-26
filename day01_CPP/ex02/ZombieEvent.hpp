/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 19:45:58 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/02 19:45:59 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP
#include "Zombie.hpp"

class ZombieEvent{

private:
    std::string _z_type;

public:
    ZombieEvent();
    ~ZombieEvent();

    void    setZombieType(std::string new_type);
    Zombie* newZombie(std::string name);
};
#endif
