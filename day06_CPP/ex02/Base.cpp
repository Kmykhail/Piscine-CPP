/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 21:42:06 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/27 21:50:16 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base() {}

Base::~Base() {}

Base::Base(Base const &cpy) { *this = cpy; }

Base& Base::operator=(Base const &rhs) {
    (void)rhs;
    return *this;
}