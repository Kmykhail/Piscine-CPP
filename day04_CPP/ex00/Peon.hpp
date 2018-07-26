/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 17:24:01 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/14 17:24:02 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public  Victim{

public:
    Peon(void);
    Peon(std::string name);
    Peon(Peon const & cpy);
    ~Peon(void);

    Peon &operator=(Peon const & rhs);
   virtual void    getPolymorphed() const;
};

#endif