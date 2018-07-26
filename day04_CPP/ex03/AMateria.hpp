/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:48:26 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/18 12:48:27 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
private:
    std::string _type;
    unsigned int xp_;
public:
    AMateria();
    AMateria(std::string const & type);
    AMateria(AMateria const & cpy);
    ~AMateria();
    std::string const &getType() const;
    unsigned int getXP() const;

    virtual AMateria* clone() const  = 0;
    virtual void    use(ICharacter& target);
};
#endif