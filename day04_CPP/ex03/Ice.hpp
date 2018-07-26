/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:48:45 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/18 12:48:46 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria{
public:
    Ice();
    Ice(Ice const & cpy);
    ~Ice();

    Ice &operator=(Ice const & rhs);
    AMateria* clone() const ;
    //void    use(ICharacter& target);
};
#endif
