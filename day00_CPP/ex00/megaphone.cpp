/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 09:54:56 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/18 09:55:06 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av) {

    if (ac == 1)
        return (puts("* LOUD AND UNBEARABLE FEEDBACK NOISE *"));
    av++;
    for (; ac > 1 ; ac--, av++)
        for (; **av; (*av)++)
            std::cout << (char)toupper(**av);
    std::cout << std::endl;
    return (0);
}
