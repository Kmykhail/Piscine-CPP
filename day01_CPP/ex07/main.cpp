/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 16:38:46 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/20 18:18:25 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>

int		check_args(char *av[]){
	
	if (av[2][0] == '\0' || av[3][0] == '\0')
		exit(1);
	return 0;
}

int		main(int ac, char *av[])
{
	std::string     res;
	std::ifstream   fin(av[1]);
	if (!fin || ac != 4 || check_args(av))
		return ((!fin) ? puts("Wrong filename") : puts("Wrong number of args"));
	res = av[1];
	for (size_t i = 0; i < res.length(); ++i)
		res[i] = toupper(res[i]);
	res += ".replace";
	std::ofstream   fout(res);
    std::string av_2(av[2]);
    std::string av_3(av[3]);
    while (getline(fin, res)) {
        for (size_t i = 0; (i = res.find(av_2, i)) != std::string::npos;) {
            res.replace(i, av_2.length(), av_3);
            i += av_3.length();
        }
        if (!fin.eof())
            res += "\n";
        fout << res;
    }
	fin.close();
	fout.close();
	return 0;
}


