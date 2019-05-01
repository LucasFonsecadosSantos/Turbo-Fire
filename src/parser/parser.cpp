#include "../../include/parser/parser.hpp"

#include <vector>
#include <string.h>
#include <cstddef>
#include <iostream>

Parser::Parser() {}
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