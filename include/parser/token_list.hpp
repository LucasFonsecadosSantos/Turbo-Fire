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
#ifndef TOKEN_LIST_H
#define TOKEN_LIST_H 1

#include "token.hpp"
#include <string>
#include <vector>

/**
 * \class TokenList
 * \author Lucas Fonseca dos Santos (lucas@lcfcompany.com.br)
 * \date 2019-05-01
 * \version 1.0.002
 * \brief This class implements a token list to use in Parse module.
 * 
 */
class TokenList {

    public:

        TokenList();

        ~TokenList();
        
        void addToken(Token *token);

        Token* getToken(unsigned short index);

        std::string toString();

    private:

        std::vector<Token*> *tokenList;

};

#endif
