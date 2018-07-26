/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 21:58:53 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/27 21:58:54 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
#define B_HPP
#include "Base.hpp"

class B : public Base{
public:
    B();
    ~B();
    B(B const & cpy);
    B &operator=(B const & rhs);
};

#endif