/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 21:58:53 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/27 21:58:54 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B() {}

B::~B() {}

B::B(B const &cpy) { *this = cpy; }

B& B::operator=(B const &rhs) {
    (void)rhs;
    return *this;
}