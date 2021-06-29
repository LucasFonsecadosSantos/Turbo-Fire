#ifndef BASE_PARSER_H
#define BASE_PARSER_H 1

#include "token_list.hpp"

#include <string>

class BaseParser {

    public:
        
        BaseParser();

        ~BaseParser();

        virtual TokenList* parse(std::string corpus);

        virtual void setReservedWords();
        
        void setCorpus(std::string corpus);

        bool isReservedWord(std::string word);

        bool isNumber(std::string token);

    protected:

        std::string corpus;

        std::string *reservedWord;

        TokenList *tokenList;

};

#endif
