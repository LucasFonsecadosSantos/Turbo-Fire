#ifndef TOKEN_PARSER_H
#define TOKEN_PARSER_H 1

#include <string>

class Token {

    public:
        Token(std::string tokenClass, std::string tokenValue);
        ~Token();
        std::string getClass();
        std::string getValue();

    private:
        std::string tokenClass;
        std::string tokenValue;
};

#endif