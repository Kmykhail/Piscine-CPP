/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 20:19:25 by kmykhail          #+#    #+#             */
/*   Updated: 2018/05/31 20:19:26 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(){
	Pony	*second = new Pony("HeapPony");
	std::cout << "This is a " << second->getPony() << std::endl;
	delete second;
}
void	ponyOnTheStack(){
	Pony	first("StackPony");
	std::cout << "This is a " << first.getPony() << std::endl;
}

int		main()
{
	std::cout << "P.O.N.Y" << std::endl;
	ponyOnTheHeap();
	std::cout << std::endl;
	ponyOnTheStack();
}