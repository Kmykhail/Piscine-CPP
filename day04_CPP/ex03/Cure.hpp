/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:49:12 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/18 12:49:13 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
#define Cure_HPP
#include "AMateria.hpp"

class Cure : public AMateria{
public:
    Cure();
    Cure(Cure const & cpy);
    ~Cure();

    Cure &operator=(Cure const & rhs);
    AMateria* clone() const ;
    //void    use(ICharacter& target);
};
#endif
