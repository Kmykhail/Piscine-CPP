/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 19:23:49 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/02 19:23:50 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie{

private:
    std::string _name;
    std::string _type;
public:
    Zombie();
    ~Zombie();

    void    setNameType(std::string name, std::string type);
    void    announce();

};
#endif
