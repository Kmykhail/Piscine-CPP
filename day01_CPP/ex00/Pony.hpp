/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 20:19:18 by kmykhail          #+#    #+#             */
/*   Updated: 2018/05/31 20:19:20 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP
#include <string>
#include <iostream>

class Pony{

private:
    std::string _nick;
public:
    Pony(std::string    name);
    ~Pony(void);

    std::string     getPony(void);
};
#endif