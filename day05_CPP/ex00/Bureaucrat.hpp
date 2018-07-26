/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 15:15:40 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/26 19:06:07 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat{
private:
    std::string _name;
    int         _grade;
public:
    Bureaucrat(std::string const & name, int grade);
    ~Bureaucrat();
    Bureaucrat(Bureaucrat const & cpy);
    Bureaucrat &operator=(Bureaucrat const & rhs);


    std::string     getName() const;
    int             getGrade() const;

    void            incrmGrade();
    void            decrmGrade();

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
std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
