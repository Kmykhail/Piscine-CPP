/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 14:36:09 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/21 11:23:13 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#define ADD res[i] == '+'
#define MIN res[i] == '-'
#define MUL res[i] == '*'
#define DIV res[i] == '/'
/*
int     check_operators(std::string str, int cnt_val, int & cnt_oper, std::string & oper){
    for(size_t i = 0; i < str.length(); i++) {
        if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*'){
            cnt_oper++;
            oper.push_back(str[i]);
        }
    }
    return ((cnt_oper == cnt_val - 1) ? 1 : 0);
}

int     check_brackets(std::string str, int & len){
    int mem = 0;

    for(size_t i = 0; i < str.length(); i++){
        if (!mem && str[i] == ')')
            return 1;
        else if (str[i] == '(' && i + 1 < str.length() && str[i + 1] == ')')
            return 1;
        else if (str[i] == '(' && i + 1 == str.length())
            return 1;
        if (str[i] == '('){
            mem += 1;
            len++;
        }
        mem -= (str[i] == ')') ? 1 : 0;
    }
    return ((mem != 0) ? 1 : 0);
}

float   calcul(float o, char oper, float t){
    if (oper == '*')
        return o * t;
    if (oper == '/') {
        if (t == 0.0f){
            std::cout << "Division by zero" << std::endl;
            exit(1);
        }
        return o / t;
    }
    if (oper == '+')
        return o + t;
    if (oper == '-')
        return o - t;
    return 0;
}

void    solve_priority(std::string & str, int a, int b, float & f_res){
    std::string oper;
    std::string res = str.substr(a, b - a + 1);
    const char *ptr = res.c_str();
    for(size_t i = 0; i < res.size(); i++)
        if (res[i] == '+' || res[i] == '-' || res[i] == '/' || res[i] == '*')
            oper.push_back(res[i]);
    float mass_val[oper.size() + 1];
    for(size_t i = 0, l = 0, k = 0 ; res[i]; i++){
        if (ADD || MIN || MUL || DIV || i + 1 == strlen(ptr)){
            k +=  (ptr[k] == '(') ? 1 : 0;
            mass_val[l] =  (!l) ? atof(&ptr[k]) : atof(&ptr[k]);;
            l++;
            k = i + 1;
        }
    }
    if (strchr(oper.c_str(), '*') || strchr(oper.c_str(), '/')){
        for(size_t i = 0, j = -1; i < res.size(); i++){

            if (ADD || MIN || MUL || DIV)
                j++;
            if (MUL || DIV){
                mass_val[j + 1] = calcul(mass_val[j], oper[j], mass_val[j + 1]);
                f_res = mass_val[j + 1];
                int a_a = i - 1;
                int b_b = i + 1;
                while (res[b_b] && (isdigit(res[b_b]) || res[b_b] == '.'))
                    b_b++;
                while (a_a >= 0 && (isdigit(res[a_a]) || res[a_a] == '.'))
                    a_a--;
                if (a_a < 0)
                    a_a = 0;
                else
                    a_a += 1;
                if (b_b < (int)res.size())
                    b_b -= 1;
                res.replace(a_a, b_b - a_a + 1, std::to_string(f_res));
                i = -1;
                j = -1;
                oper.clear();
                for(size_t i = 0; i < res.size(); i++)
                    if (res[i] == '+' || res[i] == '-' || res[i] == '/' || res[i] == '*')
                        oper.push_back(res[i]);
                memset(mass_val, 0, sizeof(oper.size() + 1));
                ptr = res.c_str();
                for(size_t i = 0, l = 0, k = 0 ; res[i]; i++){
                    if (ADD || MIN || MUL || DIV || i + 1 == (size_t)strlen(ptr)){
                        k +=  (ptr[k] == '(') ? 1 : 0;
                        mass_val[l] =  (!l) ? atof(&ptr[k]) : atof(&ptr[k]);
                        l++;
                        k = i + 1;
                    }
                }
            }
        }
    }
    for(size_t i = 0, j = -1; i < res.size(); i++){
        if (ADD || MIN || MUL || DIV)
            j++;
        if (ADD || MIN){
            mass_val[j + 1] = calcul(mass_val[j], oper[j], mass_val[j + 1]);
            f_res = mass_val[j + 1];
            int a_a = i - 1;
            int b_b = i + 1;
            while (res[b_b] && (isdigit(res[b_b]) || res[b_b] == '.'))
                b_b++;
            while (a_a >= 0 && (isdigit(res[a_a]) || res[a_a] == '.'))
                a_a--;
            if (a_a < 0)
                a_a = 0;
            else
                a_a += 1;
            if (b_b < (int)res.size())
                b_b -= 1;
            res.replace(a_a, b_b - a_a + 1, std::to_string(f_res));
            i = -1;
            j = -1;
            oper.clear();
            for(int i = 0; i < (int)res.size(); i++)
                if (res[i] == '+' || res[i] == '-' || res[i] == '/' || res[i] == '*')
                    oper.push_back(res[i]);
            memset(mass_val, 0, sizeof(oper.size() + 1));
            ptr = res.c_str();
            for(int i = 0, l = 0, k = 0 ; res[i]; i++){
                if (ADD || MIN || MUL || DIV || i + 1 == (int)strlen(ptr)){
                    k += (ptr[k] == '(') ? 1 : 0;
                    mass_val[l] =  (!l) ? atof(&ptr[k]) : atof(&ptr[k]);
                    l++;
                    k = i + 1;
                }
            }
        }
    }
}

void    case_in_bracket(std::string & str, float & f_res){
    std::string oper;
    std::string res;
    int a = 0;
    int b = 0;
    for(size_t i = 0; i < str.size(); i++){
        a += (str[i] == '(') ? 1 : 0;
        if (a == count(str.begin(), str.end(), '(')){
            a = i;
            while(str[i] && str[i] != ')')
                i++;
                b = i;
                break;
        }
    }
    solve_priority(str, a, b, f_res);
    str.replace(a, b - a + 1, std::to_string(f_res));
    if ((count(str.begin(), str.end(), '(') > 0))
        case_in_bracket(str, f_res);
}

 int main(int ac, char *av[]){
     int cnt_br = 0;
     int cnt_oper = 0;
     std::string oper;
     float f_res = 0;
     if (ac != 2)
        return (puts("Wrong number paramets"));
     std::string str = std::string(av[1]);
     str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
     if (check_brackets(str, cnt_br) || check_operators(str, cnt_br, cnt_oper, oper) || str.empty())
        return (puts ("wrong format arg"));
     oper.clear();
     if ((count(str.begin(), str.end(), '(') > 0))
        case_in_bracket(str, f_res);
    if (strchr(str.c_str(), '+') || strchr(str.c_str(), '-') || strchr(str.c_str(), '*') || strchr(str.c_str(), '/')) {
        solve_priority(str, 0, str.size() - 1, f_res);
        str.replace(0, str.size(), std::to_string(f_res));
    }
     Fixed  answer(f_res);
     std::cout << answer << std::endl;
     return 0;
}
*/
