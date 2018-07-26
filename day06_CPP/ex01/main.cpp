/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 18:27:13 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/27 18:27:14 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>

struct Data{
    std::string s1;
    int         n;
    std::string s2;
};

void*   serialize(){
    char qw;
    char *fin = new char[20];
    for (int i = 0; i < 20; ++i) {
        if (i < 8) {
            while (!std::isalnum((qw = rand() % 127)));
            fin[i] = qw;
        }
        else if (i >= 8 && i < 12) {
            while (!std::isdigit(qw = rand() % 127));
            fin[i] = qw;
        }
        else if (i >= 12) {
            while (!std::isalnum((qw = rand() % 127)));
            fin[i] = qw;
        }
    }
    fin[20] = '\0';
    std::cout << "Fin: " << fin << std::endl;
    return reinterpret_cast<void*>(fin);
}

Data*   deserialize(void*   raw){
    Data    *dt;

    std::string war = reinterpret_cast<char*>(raw);
    dt = new Data;

    dt->s1 = war.substr(0, 8);
    dt->n = atoi((war.substr(8, 11)).c_str());
    dt->s2 = war.substr(12, 20);

    std::cout << "dt->s1 :" << dt->s1 << std::endl;
    std::cout << "dt->n :" << dt->n << std::endl;
    std::cout << "dt->s2 :" << dt->s2  << "\n" << std::endl;
    return dt;

}

int main(){
    Data *data;
    srand((unsigned)time(NULL));
    data =  deserialize(serialize());
    std::cout << "dt->s1 :" << data->s1 << std::endl;
    std::cout << "dt->n :" << data->n << std::endl;
    std::cout << "dt->s2 :" << data->s2 << std::endl;

    delete data ;
    return 0;
}
