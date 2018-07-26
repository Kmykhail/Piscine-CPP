/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 18:18:04 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/02 18:18:05 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void memoryLeak()
{
        std::string*        panthere = new std::string("String panthere");
        std::cout << *panthere << std::endl;
        delete panthere;
}

int     main()
{
    memoryLeak();
    return 0;
}
