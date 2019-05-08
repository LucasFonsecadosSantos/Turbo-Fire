#include "../../include/parser/parser.hpp"
#include "../../include/parser/token.hpp"

#include <vector>
#include <string.h>
#include <string>
#include <cstddef>
#include <iostream>

Parser::Parser() {
    this->reservedWord = new std::string[4] {
        "help","fire","exit","status"
    };
    this->commandAttribute = new std::string[16] {
        "--port","-p",
        "--target","-t",
        "--thread","-th",
        "--timeout","-to",
        "--range","-r",
        "--protocol","-pt",
        "--attacktimeout","-ato",
        "--message","-m"
    };
}

Parser::~Parser() {}

std::vector<unsigned short>* Parser::getIPTokens(std::string ipAddress) {
    std::vector<unsigned short> *tokens = new std::vector<unsigned short>();
    char *str = &ipAddress[0u];
    char *octet = strtok(str,".");
    while (octet) {
        tokens->push_back(std::stod(octet));
        octet = strtok(NULL,".");
    }
    return tokens;
}

std::vector<Token*>* Parser::getCommandTokens(std::string command) {
    std::vector<Token*> *tokens = new std::vector<Token*>();
    char *str = &command[0u];
    char *word = strtok(str, " ");
    std::string tokenClass;
    while (word) {
        if (isReservedWord(word)) {
            tokens->push_back(new Token(word, ""));
        } else if (isCommandAttribute(word)) {
            tokenClass = word;
            word = strtok(NULL," ");
            if (word) {
                tokens->push_back(new Token(tokenClass, word));
            } else {
                //need throw a exception (not a attribute value);
            }
        }
        word = strtok(NULL," ");
    }
    return tokens;
}

bool Parser::isReservedWord(std::string word) {
    for (unsigned short i = 0; i < 4; ++i)
        if (word == this->reservedWord[i]) return true;
    return false;
}

bool Parser::isCommandAttribute(std::string word) {
    for (unsigned short i = 0; i < 16; ++i)
        if (word == this->commandAttribute[i]) return true;
    return false;
}

bool Parser::isNumber(std::string token) {
    try {
        unsigned value = std::stoul(token);
        return true;
    } catch (const std::invalid_argument& e) {
        return false;
    }
    return false;
}