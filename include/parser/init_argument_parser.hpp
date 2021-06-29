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
#ifndef INIT_ARGUMENT_PARSER_H
#define INIT_ARGUMENT_PARSER_H 1

#include "base_parser.hpp"
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
class InitArgumentParser: virtual public BaseParser {

    public:

        InitArgumentParser();

        ~InitArgumentParser();
        
        virtual TokenList* parse(std::string corpus) override;

        //static std::vector<unsigned short>* getIPTokens(std::string ipAddress);

    private:

        std::string *commandAttribute;

        bool isCommandAttribute(std::string word);

        char* getWord(std::string word);

        virtual void setReservedWords();

};

#endif
