/**
 * +-------------------------------------------------+
 * +-------------------------------------------------+
 * + TURBO FIRE -------------------------------------+
 * + ------------------------------------------------+
 * +---------------------------------F1R3S3C T34M----+
 * 
 * \file command_parser.hpp
 * \brief This file has a command parser description.
 * \copyright COPYLEFT :)
 * This project is under GPLv3 (General Public License) version 3.
 */
#ifndef COMMAND_PARSER_PARSER_H
#define COMMAND_PARSER_PARSER_H 1

#include "token_list.hpp"
#include "parser.hpp"
#include <string>
#include <vector>

/**
 * \class CommandParser
 * \author Lucas Fonseca dos Santos (lucas@lcfcompany.com.br)
 * \date 2019-05-01
 * \version 1.0.002
 * \brief This class implements a command parser to use in application.
 * 
 * The parser implemented here can make parsing of IP address, data input
 * and other things.
 */
class CommandParser: public Parser {

    public:

        CommandParser();

        ~CommandParser();
        
        //static std::vector<unsigned short>* getIPTokens(std::string ipAddress);

    private:

        bool isCommandAttribute(std::string word);

};

#endif
