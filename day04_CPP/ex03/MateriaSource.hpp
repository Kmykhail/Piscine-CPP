/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:49:56 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/18 12:49:57 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class  MateriaSource : public IMateriaSource{
private:
    AMateria*   _mat[4];
public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(MateriaSource const & cpy);

    MateriaSource &operator=(MateriaSource const &rhs);
    void    learnMateria(AMateria* m);
    AMateria* createMaterial(std::string const &type);
};
#endif