/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 19:30:30 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/26 19:09:09 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
private:
    bool _sign;
    int  _grade_sign;
    int  _grade_exec;
    std::string _nameForm;
public:
    Form(std::string const name, int const gr_sign, int const gr_exec);
    ~Form();
    Form(Form const & cpy);

    Form &operator=(Form const & rhs);
    void    beSigned(Bureaucrat const & rhs);

    int             getGradeSign() const;
    int             getGradeExec() const;
    std::string     getNameForm() const;
    bool            getBool() const;

    class GradeTooLowException: public std::exception{
    public:
        GradeTooLowException();
        virtual ~GradeTooLowException() throw();
        GradeTooLowException(GradeTooLowException const & rhs);
        GradeTooLowException &operator=(GradeTooLowException const & rhs);
        virtual const char* what() const throw();
    };

    class GradeTooHighException: public std::exception{
    public:
        GradeTooHighException();
        virtual ~GradeTooHighException() throw();
        GradeTooHighException(GradeTooHighException const & cpy);
        GradeTooHighException &operator=(GradeTooHighException const & rhs);
        virtual const char *what() const throw();
    };

};

std::ostream & operator<<(std::ostream & o, Form const & rhs);
#endif
