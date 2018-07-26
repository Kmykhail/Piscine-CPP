/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 13:29:52 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/29 13:29:54 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <typeinfo>
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <array>

template <typename T>
typename T::iterator    easyfind(T my, int num){

        typename T::iterator it;
        typename T::iterator ite = my.end();

        for (it = my.begin(); it != ite ; ++it) {
        if (*it == num){
            std::cout << "Find val: " <<  *it << std::endl;
            return it;
        }
    }
    return it;
}
#endif