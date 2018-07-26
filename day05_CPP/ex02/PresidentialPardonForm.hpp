/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 17:00:54 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/26 17:00:56 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
class PresidentialPardonForm{
private:
    std::string _target;
    int         _sign;
    int         _exec;
public:
    PresidentialPardonForm();
    ~PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm const & cpy);
    PresidentialPardonForm &operator=(PresidentialPardonForm const & rhs);
};
#endif