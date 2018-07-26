/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 16:25:18 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/28 16:25:19 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){
    Array<int> a = Array<int>(6);
    Array<int> c;

    for (int j = 0; j < a.size() ; ++j)
        a[j] = j + 3;
    Array<int> b(a);

    c = b;
    for (int k = 0; k < c.size(); ++k)
        std::cout << "c: " << c[k] << " b: " << b[k] << std::endl;

    for (int i = 0; i < a.size() + 1; ++i) {
        try {
            a[i] = i + 5;
            std::cout << "a: " << a[i] << std::endl;
        } catch (std::exception) {
            std::cout << "***You can't use number: " << i << " of this element***" << std::endl;
        }
    }
    return 0;
}