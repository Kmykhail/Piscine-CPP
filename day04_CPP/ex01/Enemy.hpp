/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 20:23:41 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/14 20:23:42 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <iostream>
#include <string>

class Enemy{

protected:
    std::string _type;
    int     _hp;

public:
    Enemy(void);
    Enemy(int hp, std::string const & type);
    Enemy(Enemy const & cpy);
    virtual ~Enemy();

    std::string getType() const;
    int getHP() const;
    void    setType(std::string type);
    void    setHP(int hp);

    virtual void takeDamage(int);
    Enemy &operator=(Enemy const & rhs);
};
#endif