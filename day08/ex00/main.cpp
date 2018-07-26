/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 13:30:01 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/29 13:30:02 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int     main(){
    std::vector<int>            MyVector;
    std::list<int>              Mylst;
    std::array<int, 4> MyArr = {{40, 1, 78, 23}};

    MyVector.push_back(40);
    MyVector.push_back(1);
    MyVector.push_back(78);
    MyVector.push_back(23);


    Mylst.push_back(40);
    Mylst.push_back(1);
    Mylst.push_back(78);
    Mylst.push_back(23);


    std::vector<int>::iterator it;
    std::list<int>::iterator   itl;
    //MyArr::iterator ita = MyArr.begin();

    it = easyfind(MyVector, 23);
    std::cout << "it: " << *it << std::endl;

    std::cout << "---------" << std::endl;

    itl = easyfind(Mylst, 78);
    std::cout << "itl: " << *itl << std::endl;


    std::cout << "---------" << std::endl;

    easyfind(MyArr, 1);


    return 0;
}