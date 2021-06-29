#include "../../include/parser/parser.hpp"
#include "../../include/parser/base_parser.hpp"
#include "../../include/parser/token_list.hpp"
#include "../../include/exception/argument_expected.hpp"

#include <vector>
#include <string.h>
#include <string>
#include <cstddef>
#include <iostream>

Parser::Parser() {}

Parser::~Parser() {}

void Parser::setStrategy(BaseParser *parser) { this->parser = parser; }

void Parser::setCorpus(std::string corpus) { this->parser->setCorpus(corpus); }

BaseParser* Parser::getInstance() { return this->parser; }

std::string Parser::convertCharArrayToString(int argc, char **argv) {

    std::string convertedString;

    for (unsigned i=0; i < strlen(*argv); i++)
        convertedString += ' ' + argv[i];

    return convertedString;
}

// std::vector<unsigned short>* Parser::getIPTokens(std::string ipAddress) {
//     std::vector<unsigned short> *tokens = new std::vector<unsigned short>();
//     char *str = &ipAddress[0u];
//     char *octet = strtok(str,".");
//     while (octet) {
//         tokens->push_back(std::stod(octet));
//         octet = strtok(NULL,".");
//     }
//     return tokens;
// }