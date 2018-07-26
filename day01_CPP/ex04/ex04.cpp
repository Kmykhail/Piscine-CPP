/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 17:51:38 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/04 17:51:39 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void    display_pointer(std::string*    br){
    std::cout << *br << std::endl;
}

void    display_reference(std::string&   br){
    std::cout << br << std::endl;
}

int main(){
    std::string brain = "HI THIS IS BRAIN";
    display_pointer(&brain);
    display_reference(brain);
    return 0;
}