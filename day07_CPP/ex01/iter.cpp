/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 14:58:28 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/28 14:58:29 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T, typename F >

void	iter( T *array, unsigned int length, F function)
{
	for (unsigned int i = 0; i < length; i++)
		function(array[i]);
}

void	to_upper( char &c ) { c = toupper(c); }

void	changeInt( int &a ) { a *= 100; }

void	printChar( char c ) { std::cout << "char " << c << std::endl; }

int main( void )
{
	int	mass[5] = {100, 200, -5, 78, 4};
	iter(mass, 5, changeInt);
	std::cout << "Print_change_mass" << std::endl;
	for (int i = 0; i < 5; ++i)
		std::cout << mass[i] << std::endl;

	char str[] = "Kostya wanna more!";
	iter(str, strlen(str), to_upper);
	iter(str, strlen(str), printChar);
	
	std::cout << "!!!!!!" << std::endl;
	
	std::cout << str << std::endl;
}