/**
 * +-------------------------------------------------+
 * +-------------------------------------------------+
 * + TURBO FIRE -------------------------------------+
 * + ------------------------------------------------+
 * +---------------------------------F1R3S3C T34M----+
 * 
 * \file parser.hpp
 * \brief This file has a parser description.
 * \copyright COPYLEFT :)
 * This project is under GPLv3 (General Public License) version 3.
 */
#ifndef PARSER_PARSER_H
#define PARSER_PARSER_H 1

#include "base_parser.hpp"
#include "token.hpp"
#include "token_list.hpp"
#include <string>
#include <vector>

/**
 * \class Parser
 * \author Lucas Fonseca dos Santos (lucas@lcfcompany.com.br)
 * \date 2019-05-01
 * \version 1.0.002
 * \brief This class implements a parser to use in application.
 * 
 * The parser implemented here can make parsing of IP address, data input
 * and other things.
 */
class Parser {

    public:

        Parser();

        ~Parser();

        TokenList* parsingOf(std::string command);

        void setCorpus(std::string corpus);

        void setStrategy(BaseParser *strategy);

        BaseParser* getInstance();

        std::string getCorpus();

        static std::string convertCharArrayToString(int argc, char *argv[]);


    protected:

        BaseParser *parser;

        

    private:

};

#endif
