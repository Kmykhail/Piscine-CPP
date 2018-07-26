/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 18:00:04 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/04 18:00:05 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP
#include "Brain.hpp"

class Human{

private:
	const Brain _qw;

public:
   	Human(void);
   	~Human(void);

   	const Brain& getBrain() const;
   	std::string	identify() const;
};
#endif