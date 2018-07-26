/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 11:08:08 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/29 11:08:09 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "mutantstack.hpp"

int main(){
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "mstck: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(6);
    mstack.push(737);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it; }
    std::stack<int> s(mstack);
    return 0;
}