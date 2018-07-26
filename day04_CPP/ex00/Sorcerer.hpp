/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 17:24:07 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/14 17:24:08 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP
#include "iostream"
#include "string"
#include "Victim.hpp"

class Sorcerer{

protected:
    std::string _title;
    std::string _name;
public:
    Sorcerer(void);
    Sorcerer(std::string name, std::string title);
    Sorcerer(Sorcerer const & cpy);
    ~Sorcerer(void);

    Sorcerer &operator=(Sorcerer const & rhs);
    std::string getName(void) const;
    std::string getTitle(void) const;
    std::string getIntroduce(void) const;
    void        polymorph(Victim const & rhs) const;
    void        setName(std::string name);
    void        setTitle(std::string title);

};

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs);
#endif