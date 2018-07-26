/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 10:24:50 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/06 10:24:51 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_H
# define LOGGER_H
#include <iostream>
#include <fstream>
#include <string>
#include <time.h>

class Logger{

private:
    void            _logToConsole(std::string const & str);
    void            _logToFile(std::string const & str);
    std::string     _makeLogEntry(std::string const & str);

    std::string _dest;
    std::string _message;
    std::string _Logger;

public:
    Logger(void);
    ~Logger(void);

    void    log(std::string const & dest, std::string const & message);
};
#endif