#include "../../include/parser/base_parser.hpp"
#include "../../include/exception/not_valid_argument.hpp"

#include <string>
#include <cstddef>
#include <string.h>
#include <iostream>

BaseParser::BaseParser() {

    this->tokenList = new TokenList();

}

BaseParser::~BaseParser() {
    delete this->tokenList;
}

void BaseParser::setCorpus(std::string corpus) { this->corpus = corpus; }

bool BaseParser::isReservedWord(std::string word) {
    for (unsigned short i = 0; i < 4; ++i)
        if (word == this->reservedWord[i]) return true;
    return false;
}

bool BaseParser::isNumber(std::string token) {
    try {
        unsigned value = std::stoul(token);
        return true;
    } catch (const std::invalid_argument& e) {
        return false;
    }
    return false;
}