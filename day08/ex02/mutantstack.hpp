/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 11:08:49 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/29 11:08:50 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
    typedef    std::stack<T> base;

public:
    MutantStack(void) {}
    ~MutantStack(void) {}
    MutantStack(MutantStack const & o): base(o) {}
    typedef typename base::container_type::iterator iterator;
    using		base::operator=;

    iterator	begin() { return base::c.begin(); }
    iterator	end() { return base::c.end() ; }
};

#endif