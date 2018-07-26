/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 17:24:23 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/14 17:24:24 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP
#include "iostream"
#include "string"

class Victim{

protected:
    std::string _name;
public:
    Victim(void);
    Victim(std::string name);
    Victim(Victim const & cpy);
    ~Victim(void);

    Victim &operator=(Victim const & rhs);
    std::string getName(void) const;
    std::string getIntroduce(void) const;
    virtual void        getPolymorphed(void) const;
    void        setName(std::string name);
};

std::ostream & operator<<(std::ostream & o, Victim const & rhs);
#endif