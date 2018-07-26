/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 19:50:00 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/05 19:50:01 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main(){
    Human a;
    a.action("melee", "yux");
    a.action("ranged", "skr_papa");
    a.action("intima", "toto");
    a.action("intim", "toto");
    return 0;
}