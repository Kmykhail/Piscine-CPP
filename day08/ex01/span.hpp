/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 16:57:43 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/29 16:57:44 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include "ctime"


class Span{
private:
    unsigned int _num;
    std::vector<int> _mv;
public:
    Span();
    Span(unsigned int);
    Span(Span const &cpy);
    ~Span();

    void    addNumber(int);
    int     shortestSpan(void);
    int     longestSpan(void);
    Span &operator=(Span const &rhs);



    class Range : public std::exception{
    public:
        Range();
        virtual ~Range() throw();
        Range(Range const & cpy);
        Range &operator=(Range const & rhs);
        virtual const char* what() const throw();
    };

    class Size : public std::exception{
    public:
        Size();
        virtual ~Size() throw();
        Size(Size const & cpy);
        Size &operator=(Size const & rhs);
        virtual const char* what() const throw();
    };
};
#endif