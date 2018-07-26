/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 21:43:02 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/27 21:43:04 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
#define A_HPP
#include "Base.hpp"

class A : public Base{
public:
    A();
    ~A();
    A(A const & cpy);
    A &operator=(A const & rhs);
};

#endif