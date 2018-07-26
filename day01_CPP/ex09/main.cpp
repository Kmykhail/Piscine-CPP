/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 10:24:57 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/06 10:24:58 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main(){
    Logger  l;

    l.log("Console", "new_string[a]");
    l.log("File", "new_string[b]");
    l.log("Console", "new_string[c]");
    return 0;
}