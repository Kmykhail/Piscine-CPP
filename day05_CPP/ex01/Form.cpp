/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 19:30:25 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/26 19:08:49 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, int const gr_sign, int const gr_exec) : _nameForm(name){
        _grade_sign = gr_sign;
        _grade_exec = gr_exec;
    if (this->_grade_sign < 1 || this->_grade_exec < 1)
    {
        throw Form::GradeTooHighException();
    }
    else if (this->_grade_sign > 150 || this->_grade_exec > 150)
    {
        throw Form::GradeTooLowException();
    }
    _sign = false;
}

Form::Form(Form const &cpy) { *this = cpy; }

Form::~Form() {}

Form& Form::operator=(Form const &rhs) {
    this->_nameForm = rhs.getNameForm();
    this->_grade_exec = rhs.getGradeExec();
    this->_grade_sign = rhs.getGradeSign();
    this->_sign = rhs.getBool();
    return *this;
}

void Form::beSigned(Bureaucrat const &rhs) {
    int gr = rhs.getGrade();
    if (gr >= 1 && gr <= 150)
        _sign = true;
    else if (gr < 1 || gr > 150)
        (gr < 1) ? throw Form::GradeTooHighException() : throw Form::GradeTooLowException();
}

int Form::getGradeSign() const { return this->_grade_sign; }

int Form::getGradeExec() const { return this->_grade_exec; }

std::string Form::getNameForm() const { return  this->_nameForm; }

bool Form::getBool() const { return this->_sign; }



Form::GradeTooLowException::GradeTooLowException() {}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &cpy) { *this = cpy; }

Form::GradeTooLowException& Form::GradeTooLowException::operator=(GradeTooLowException const &rhs) {
    (void)rhs;
    return *this;
}

Form::GradeTooHighException::GradeTooHighException() {}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &cpy) { *this = cpy; }

Form::GradeTooHighException& Form::GradeTooHighException::operator=(GradeTooHighException const &rhs) {
    (void)rhs;
    return *this;
}


const char* Form::GradeTooLowException::what() const throw() {
    return "***GradeTooLowException***";
}

const char* Form::GradeTooHighException::what() const throw() {
    return "***GradeTooHighException***";
}


std::ostream & operator<<(std::ostream & o, Form const & rhs){
    o << "The form: " << rhs.getNameForm() << " which is " \
        << " signed, which requires a grade " << rhs.getGradeSign() \
        << " to sign, and " << rhs.getGradeExec() << " to be executed." \
        << std::endl;
    return (o);
}
