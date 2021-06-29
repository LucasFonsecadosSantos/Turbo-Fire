#include "../../include/parser/init_argument_parser.hpp"

InitArgumentParser::InitArgumentParser() {

    this->setReservedWords();

}

InitArgumentParser::~InitArgumentParser() {
    
}

TokenList* InitArgumentParser::parse(std::string corpus) {

    return this->tokenList;

}

void InitArgumentParser::setReservedWords() {

    this->reservedWord = new std::string[2] {
        "salve","master"
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