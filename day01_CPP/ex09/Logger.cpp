/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 10:24:41 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/06 10:24:42 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(){
    this->_Logger = "Logger";
}

Logger::~Logger(){

}

void    Logger::_logToConsole(std::string const & str){
    std::cout << "[logToConsole]:" << str;
}

void    Logger::_logToFile(std::string const & str){
    std::ofstream   fout;
    fout.open(this->_Logger, std::ios::app);
    fout << str;
    fout.close();
}

std::string     Logger::_makeLogEntry(std::string const & str){
	time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    char date[20];
    strftime(date, sizeof(date), "%Y-%m-%d %X", tm);
    this->_message = date;
    this->_message += ", logger: " + str + "\n";
    return this->_message;
}

void    Logger::log(std::string const & dest, std::string const & mess){
    std::string logName[2] = {"Console", "File"};
    void    (Logger::*destination[2])(std::string const &) =
    {
        &Logger::_logToConsole,
        &Logger::_logToFile
    };
    for(int i = 0; i < 2; i++){
        if (logName[i] == dest)
            (this->*destination[i])(this->_makeLogEntry(mess));
    }
}
