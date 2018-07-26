/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 20:24:27 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/14 20:24:28 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy{

public:
    RadScorpion(void);
    RadScorpion(int hp, std::string const & type);
    RadScorpion(RadScorpion const & cpy);
    ~RadScorpion();

    RadScorpion &operator=(RadScorpion const &rhs);
};
#endif