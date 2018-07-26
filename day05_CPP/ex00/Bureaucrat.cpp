/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 15:15:46 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/26 19:06:33 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const & name, int grade) {
    _name = name;
    if (grade < 1){
       std::cout << name << std::endl;
        throw Bureaucrat::GradeTooLowException();
    }
    else if (grade > 150) {
        std::cout << name << std::endl;
        throw Bureaucrat::GradeTooHighException();
    }
    _grade = grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat const &cpy) { *this = cpy; }

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &rhs) {
    _name = rhs.getName();
    _grade = rhs.getGrade();
    return *this;
}

int Bureaucrat::getGrade() const { return this->_grade; }

std::string Bureaucrat::getName() const { return this->_name; }

void Bureaucrat::incrmGrade() {
    if (_grade <= 1){
        std::cout << _name << std::endl;
        throw Bureaucrat::GradeTooLowException();
    }
    else
        _grade--;
}

void Bureaucrat::decrmGrade() {
    if (_grade >= 150){
        std::cout << _name << std::endl;
        throw Bureaucrat::GradeTooHighException();
    }
    else
        _grade++;
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &cpy) { *this = cpy; }

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &rhs) {
    (void)rhs;
    return *this;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &cpy) { *this = cpy; }

Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &rhs) {
    (void)rhs;
    return *this;
}


const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "***GradeTooLowException***";
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "***GradeTooHighException***";
}



std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs){
    std::string res = rhs.getName();
    res += ", bureaucrat grade ";
    res += std::to_string(rhs.getGrade());
    o << res;
    return o;
}
