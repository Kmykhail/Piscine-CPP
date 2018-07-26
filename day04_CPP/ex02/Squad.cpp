/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/17 17:12:03 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/17 17:12:05 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Squad.hpp"

Squad::Squad() {

    _Isp = NULL;
    _sum = 0;
}
Squad::~Squad() {
    while (_Isp)
    {
        delete(_Isp->lst);
        _Isp = _Isp->next;
    }
    delete _Isp;
}

Squad::Squad(Squad const &cpy) {
    *this = cpy;
}


ISquad&	Squad::operator=( ISquad const & rhs)
{
    for (; _Isp ; _Isp = _Isp->next)
        delete(_Isp->lst);
    delete _Isp;
    _Isp = NULL;
    this->_sum = rhs.getCount();
    for (int i = 0; i <  _sum; ++i) {
        _Isp = new t_lst;
        _Isp->lst = rhs.getUnit(i)->clone();
        if (i + 1 < _sum) {
            _Isp->next = new t_lst;
            _Isp->next->lst = rhs.getUnit(i)->clone();
            _Isp->next->next = NULL;
            _Isp = _Isp->next;
        }
        else
            _Isp->next = NULL;
    }
    return *this;
}

int Squad::getCount() const { return this->_sum; }

ISpaceMarine* Squad::getUnit(int n) const {
    t_lst   *tmp = _Isp;
    if (n < _sum){
        for (int i = 0; i < _sum ; ++i) {
            if (i == n){
                return tmp->lst;
            }
            tmp = _Isp->next;
        }
    }
    return tmp->lst;
}


int     Squad::push(ISpaceMarine *some) {
    if (!_sum && some != NULL){
        _Isp = new(t_lst);
        _Isp->lst = some;
        _Isp->next = NULL;
        _sum++;
    }
    else if (_sum && some != NULL)
    {
        bool check = false;
        t_lst *head = _Isp;
        t_lst *tmp;
        while (_Isp->next) {
            check = (_Isp->lst == some) ? true : check;
            _Isp = _Isp->next;
        }
        if (!check){
            tmp = new(t_lst);
            tmp->lst = some;
            tmp->next = NULL;
            _Isp->next = tmp;
            _Isp = head;
            _sum++;
        }
    }
    return (_sum);
}
