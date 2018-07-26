/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 16:57:48 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/29 16:57:49 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() : _num(0) {_mv.clear(); }

Span::Span(unsigned int n) : _num(n) {
    _mv.clear();
}

Span::~Span() {}

Span::Span(Span const &cpy) { *this = cpy; }

void Span::addNumber(int val) {
    if (_mv.size() + 1 > _num){
        throw Span::Size();
    }
    _mv.push_back(val);
}

Span& Span::operator=(Span const &rhs) {
    _mv.clear();
    this->_num = rhs._num;
    this->_mv = rhs._mv;
    return *this;
}

int Span::longestSpan() {
    if (_mv.size() <= 1)
        throw Span::Size();
    std::sort(_mv.begin(), _mv.end());
    return (_mv.back() - _mv.front());
}


int Span::shortestSpan() {
    if (_mv.size() <= 1)
        throw Span::Range();
    std::sort(_mv.begin(), _mv.end());
    int min = _mv.at(1) - _mv.at(0);
    for (size_t i = 0; i < _mv.size() ; ++i) {
        if (i + 1 < _mv.size() &&  min > _mv.at(i + 1) - _mv.at(i))
            min = _mv.at(i + 1) - _mv.at(i);
    }
    return (min);
}

Span::Size::Size() {}
Span::Size::~Size() throw() {}
Span::Size::Size(Size const & cpy){ *this = cpy; }
Span::Size& Span::Size::operator=(Size const &rhs) {
    (void)rhs;
    return *this;
}
const char* Span::Size::what() const throw() { return "Container is full"; }


Span::Range::Range() {}
Span::Range::~Range() throw() {}
Span::Range::Range(Range const &cpy) { *this = cpy; }
Span::Range& Span::Range::operator=(Range const &rhs) {
    (void)rhs;
    return *this;
}
const char* Span::Range::what() const throw() { return "No valid Range"; }
