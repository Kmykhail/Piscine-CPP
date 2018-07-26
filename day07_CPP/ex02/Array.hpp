/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 16:24:54 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/28 16:24:55 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <string>

template <typename T>

class Array{
private:
    T* _val;
    unsigned int _size;
public:
    Array() { _val = nullptr; }

    Array(unsigned int n) : _size(n) { _val = new T [_size]; }

    Array(Array const & cpy) {
        _val = nullptr;
        *this = cpy; }

    Array<T>   &operator=(Array const & rhs) {
        delete _val;
        this->_size = rhs._size;
        this->_val = new T [this->_size];
        for (unsigned int i = 0; i <  this->_size; ++i)
            _val[i] = rhs._val[i];
        return *this;
    }

    T &operator[](unsigned int index){
        if (index >= _size)
            throw std::exception();
        return _val[index];
    }

    int     size() { return this->_size; }

    ~Array(){}
};

#endif