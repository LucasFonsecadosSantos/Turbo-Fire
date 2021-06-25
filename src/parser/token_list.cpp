#include "../../include/parser/token_list.hpp"

TokenList::TokenList() {

    this->tokenList = new std::vector<Token*>();

}

TokenList::~TokenList() {}

void TokenList::addToken(Token *token) {

    if (token == NULL) //throw new exception
    this->tokenList->push_back(token); 

}

Token* TokenList::getToken(unsigned short index) {

    return this->tokenList->at(index);

}

std::string TokenList::toString() {
/
    std::string str;

    return str;

}