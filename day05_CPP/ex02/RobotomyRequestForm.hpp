/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 17:00:37 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/26 17:00:38 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
class RobotomyRequestForm{
private:
    std::string _target;
    int         _sign;
    int         _exec;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string const & rhs);
    ~RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm const & cpy);
    RobotomyRequestForm &operator=(RobotomyRequestForm const & rhs);
};
#endif