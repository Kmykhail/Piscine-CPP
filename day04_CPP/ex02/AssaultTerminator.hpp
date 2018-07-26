/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/17 17:12:35 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/17 17:12:36 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <time.h>

class AssaultTerminator : public ISpaceMarine {
private:
    static int one;
    int _id;
public:
    AssaultTerminator(void);
    AssaultTerminator(AssaultTerminator const & cpy);
    ~AssaultTerminator(void);

    AssaultTerminator &operator=(AssaultTerminator const & rhs);
    ISpaceMarine* clone() const;
    void    battleCry(void) const ;
    void    rangedAttack(void) const;
    void    meleeAttack(void) const;
};
#endif