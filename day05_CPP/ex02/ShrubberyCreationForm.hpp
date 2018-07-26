/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 17:00:21 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/26 17:00:23 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <stream>

class ShrubberyCreationForm{
private:
    std::string _target;
    int         _sign;
    int         _exec;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string const & target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm const & cpy);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const & rhs);
    class GradeTooLowException: public std::exception{
    public:
        GradeTooLowException();
        ~GradeTooLowException() throw();
        GradeTooLowException(GradeTooLowException const & rhs);
        GradeTooLowException &operator=(GradeTooLowException const & rhs);
        virtual const char* what() const throw();
    };

    class GradeTooHighException: public std::exception{
    public:
        GradeTooHighException();
        ~GradeTooHighException() throw();
        GradeTooHighException(GradeTooHighException const & cpy);
        GradeTooHighException &operator=(GradeTooHighException const & rhs);
        virtual const char *what() const throw();
    };
};

#endif