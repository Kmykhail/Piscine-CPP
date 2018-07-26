/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 19:32:06 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/25 19:32:08 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

void checkForm(Bureaucrat bureaucrat, Form format)
{
    try
    {
        bureaucrat.signForm(format);
        std::cout << bureaucrat << std::endl;
        std::cout << format << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return ;
}

int main()
{
    Form        f1 = Form("A form", 42, 42);
    Form        f2 = Form("Another one...", 30, 50);
    try {

        Form        f3 = Form("Form Fuck You", 0, 42);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    Bureaucrat  b1 = Bureaucrat("Marvin", 42);
    Bureaucrat  b2 = Bureaucrat("Mr. Abraham", 1);
    Bureaucrat  b3 = Bureaucrat("XYQ", 150);

    checkForm(b1, f1);
    std::cout << b1 << " " << f1 << std::endl;

    checkForm(b1, f2);
    std::cout << b2 << " " << f2 << std::endl;

    checkForm(b2, f1);
    std::cout << b2 << " " << f1 << std::endl;

    checkForm(b2, f2);
    std::cout << b2 << " " << f2 << std::endl;

    //checkForm(b3, f3);
    //std::cout << b3 << " " << f3 << std::endl;
    return (0);
}