/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/17 17:11:55 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/17 17:11:56 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUAD_HPP
#define QUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad{
    typedef struct s_l
    {
        ISpaceMarine    *lst;
        s_l             *next;
    }                   t_lst;

private:
    int     _sum;
    t_lst   *_Isp;

public:
    Squad();
    Squad(Squad const & cpy);
    virtual ~Squad();

    ISquad & operator=( ISquad const & rhs);
    int     getCount() const;
    int     push(ISpaceMarine* some);
    ISpaceMarine* getUnit(int n) const;
};
#endif