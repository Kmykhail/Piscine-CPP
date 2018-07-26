/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 21:43:40 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/27 21:43:41 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
#define C_HPP
#include "Base.hpp"

class C : public Base{
public:
    C();
    ~C();
    C(C const & cpy);
    C &operator=(C const & rhs);
};

#endif