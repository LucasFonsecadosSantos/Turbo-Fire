#include "../../include/parser/command_parser.hpp"
#include "../../include/parser/token.hpp"
#include "../../include/parser/token_list.hpp"
#include "../../include/exception/argument_expected.hpp"

#include <string.h>
#include <string>


CommandParser::CommandParser() {

    this->setReservedWords();

}

CommandParser::~CommandParser() {}

void CommandParser::setReservedWords() {

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

TokenList* CommandParser::parse(std::string corpus) {

    //this->corpus = (corpus != nullptr) ? corpus : this->corpus;

    char *word = getWord(corpus);
    std::string tokenClass;
    
    // while (word) {

    //     if (isReservedWord(word)) {

    //         this->tokenList->addToken(new Token(word, NULL));

    //     } else if (isCommandAttribute(word)) {
            
    //         tokenClass = word;
    //         word = strtok(NULL," ");
            
    //         if (word) {
    //             this->tokenList->addToken(new Token(tokenClass, word));
    //         } else {
    //             throw ArgumentExpected();
    //         }

    //     }
    //     word = strtok(NULL," ");

    // }
    return this->tokenList;
}

bool CommandParser::isCommandAttribute(std::string word) {
    for (unsigned short i = 0; i < 16; ++i)
        if (word == this->commandAttribute[i]) return true;
    return false;
}

char* CommandParser::getWord(std::string corpus) {

    char *str = &corpus[0u];
    return strtok(str, " ");

}
