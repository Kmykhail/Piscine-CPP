/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/17 17:12:15 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/17 17:12:16 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <time.h>

class TacticalMarine : public ISpaceMarine{

private:
    static int one;
    int _id;
public:
    TacticalMarine();
    TacticalMarine(TacticalMarine const & cpy);
    ~TacticalMarine();

    ISpaceMarine* clone() const;
    TacticalMarine &operator=(TacticalMarine const & rhs);
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};
#endif