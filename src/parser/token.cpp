#include "../../include/parser/token.hpp"
#include <string>
#include <cstddef>

Token::Token(std::string tokenClass, std::string tokenValue) {
    this->tokenClass = tokenClass;
    this->tokenValue = tokenValue;
}

std::string Token::getClass() {
    return this->tokenClass;
}

std::string Token::getValue() {
    return this->tokenValue;
}

