/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 10:42:30 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/27 21:25:41 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <sstream>
#include <cfloat>

#define CHAR    std::cout << "char: " <<
#define INT     std::cout << "int: " <<
#define FLOAT   std::cout << "float: " <<
#define DOUB    std::cout << "double: " <<

void    print_cast(double num , std::string str, int what){
    size_t i = 1;
    if (what < 0){
        CHAR "impossible" << std::endl;
        INT "impossible" << std::endl;
        if (str == "nanf" || str == "-inff" || str == "+inff" )
        {
            FLOAT str << std::endl;
            str[str.length() - 1] = '\0';
            DOUB str << std::endl;
        }
        else
        {
            FLOAT str << "f" << std::endl;
            DOUB str << std::endl;
        }
        return;
    }
    if ((i = str.find('.')) != std::string::npos) {
        int ch = 0;
        std::string p = str.substr(i + 1,str.length() - 1);
        for (size_t j = 0; j < p.length(); ++j)
            if (p[j] != '0')
                ch++;
        if (!ch)
            i = 1;
        else
            i = (i >= 1) ? (str.length() - 1) - i : 1;
    }
    else
        i = 1;
    if (num < 32 || num > 126)
        (!what) ? CHAR "Non displayble" << std::endl : CHAR "impossible" << std::endl;
    else
        CHAR static_cast<char>(num) << std::endl;
    if (num >= INT32_MIN && num <= INT32_MAX)
        INT static_cast<int>(num) << std::endl;
    else
        INT "impossible" << std::endl;
    if ((num >= -FLT_MAX && num <= FLT_MAX))
        FLOAT std::fixed << std::setprecision(i) <<  static_cast<float>(num) << 'f' << std::endl;
    else
        FLOAT "impossible" << std::endl;
    DOUB std::fixed << std::setprecision(i) << num << std::endl;
}

int main(int ac, char *av[]) {
    std::stringstream ss;
    std::string res;
    double num = 0;
    if (ac != 2 || !strlen(av[1]))
        return puts("Wrong data");
    res = av[1];
    if ((res == "nan" || res == "nanf" || res == "-inf" || res == "-inff"\
    || res == "+inf" || res == "+inff")) {
        print_cast(num, res, -1);
        return 0;
    }
    if (res.size() == 1 && !isdigit(av[1][0])){
        num = av[1][0];
        (isprint(av[1][0])) ? print_cast(num, res, 1) : print_cast(num, res, 0);
        return 0;
    }
    for (size_t k = 0, ch = 0; k < res.size(); ++k) {
        if (ch > 1)
            return puts("Wrong data!!");
        if (res[k] == '.')
            ch++;
    }
    ss << res;
    ss >> num;
    if (ss.fail() && ss.eof()){
        int off = 0;
        for (size_t i = 0; i < res.length(); ++i) {
            if (off)
                return puts("Wrong data!");
            off += (res[i] == 'f') ? 1 : 0;
        }
        if (off > 1 || !off )
            return puts("Wrong data!!");
    }
    for (size_t j = 0; j < res.length(); ++j)
        if (j > 0 && !isdigit(res[j]) && res[j] != '.' && res[j] != 'f')
            return puts("Wrong data");
    num = atof(res.c_str());
    if (res.find('f') != std::string::npos)
        res.erase(res.length() - 1);
    if (res.length() == 1 && (isprint(av[1][0]) || isdigit(av[1][0]))) {
        num = (!isdigit(av[1][0])) ? av[1][0] : num;
        print_cast(num, res, 0);
    }
    else if (res.length() > 1 )
        print_cast(num, res, 1);
    return 0;
}
