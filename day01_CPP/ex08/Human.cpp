/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 19:49:54 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/05 19:49:54 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void    Human::meleeAttack(std::string const & target){
    std::cout << "[meleeAttack] Target is:" << target <<  std::endl;
}

void    Human::rangedAttack(std::string const & target){
    std::cout << "[rangedAttack] Target is:" << target << std::endl;
}

void    Human::intimidatingShout(std::string const & target){
    std::cout << "[intimidatingShout] Target is:" << target << std::endl;
}

void    Human::action(std::string const& action_name, std::string const& target){
    std::string someName[3] = {"melee", "ranged", "intim"};
    void (Human::*actionArr[3])(std::string const &) =
        {
            &Human::meleeAttack,
            &Human::rangedAttack,
            &Human::intimidatingShout
        };
    for(int i = 0; i < 3; i++){
        if (someName[i] == action_name)
            (this->*actionArr[i])(target);
    }
}