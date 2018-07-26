/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 14:24:53 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/06 14:24:54 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Устал делать

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char *av[]){
std::ifstream fin(av[1]);
std::string res;
if (!fin)
    return (puts("No such file or directory"));
    while (getline(fin, res))
        std::cout << res << std::endl;
return 0;
}