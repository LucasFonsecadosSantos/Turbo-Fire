#include "../../include/parser/parser.hpp"

#include <vector>
#include <string.h>
#include <string>
#include <cstddef>
#include <iostream>

Parser::Parser() {
    this->commandTokens = new std::string[18] {
        "help","fire",
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

std::vector<std::string>** Parser::getCommandTokens(std::string command) {
    std::vector<std::string>** tokens = new std::vector<std::string>*[2]();
    tokens[0] = new std::vector<std::string>();
    tokens[1] = new std::vector<std::string>();
    char *str = &command[0u];
    char *token = strtok(str," ");
    while (token) {
        if (isReservedWord(token)) {
            tokens[0]->push_back(token);
        } else {
            tokens[1]->push_back(token);
        }
        token = strtok(NULL,".");
    }
    return tokens;
}

bool Parser::isReservedWord(std::string word) {
    for (unsigned short i = 0; i < 17; ++i)
        if (word == commandTokens[i]) return true;
    return false;
}