#include "../../include/turbofire/app/master.hpp"
#include "../../include/turbofire/view/gui.hpp"
#include "../../include/turbofire/parser/parser.hpp"
#include "../../include/turbofire/parser/token.hpp"
#include "../../include/turbofire/protocol/attack_pattern.hpp"

#include <pthread.h>
#include <cstddef>
#include <iostream> //to delete

Master::Master() {
    Gui::masterOptions();
    startMaster();
}

Master::~Master() {}

void Master::startMaster() {
    Parser *parser = new Parser();
    bool nav = true;
    while (nav) {
        std::vector<Token*> *tokens = parser->getCommandTokens(Gui::getUserInput());
        std::string firstToken = tokens->at(0)->getClass();
        if (firstToken == "fire") {
            fire(tokens);
        } else if (firstToken == "help") {
            help();
        } else if (firstToken == "status") {
            status();
        } else if (firstToken == "exit") {
            exit();
        }
    }
}

void Master::fire(std::vector<Token*> *tokens) {
    tokens->erase(tokens->begin());
    unsigned short limit = tokens->size();
    Token *token;
    AttackPattern::PROTOCOL_TYPE protocolType   = AttackPattern::PROTOCOL_TYPE::_UNKNOW_;
    unsigned short port                         = AttackPattern::UNKNOW;
    unsigned short threadAmount                 = AttackPattern::UNKNOW;
    unsigned short attackTimeOut                = AttackPattern::UNKNOW;
    unsigned short connectionTimeOut            = AttackPattern::UNKNOW;
    unsigned short attackRange                  = AttackPattern::UNKNOW;
    std::string message                         = "";
    std::string targetIPSource                  = "";
    std::string tokenClass;
    
    for (unsigned short i = 0 ; i < limit; ++i) {
        token = tokens->at(i);
        tokenClass = token->getClass();

        if (tokenClass == "--port" || tokenClass == "-p") {
            port = std::stoul(token->getValue());
        } else if (tokenClass == "--target" || tokenClass == "--t") {
            targetIPSource = token->getValue();
        } else if (tokenClass == "--thread" || tokenClass == "-th") {
            threadAmount = std::stoul(token->getValue());
        } else if (tokenClass == "--timeout" || tokenClass == "-to") {
            connectionTimeOut = std::stoul(token->getValue());
        }  else if (tokenClass == "--range" || tokenClass == "-r") {
            attackRange = std::stoul(token->getValue());
        } else if (tokenClass == "--protocol" || tokenClass == "-pt") {
            protocolType = (token->getValue() == "tcp") ? AttackPattern::PROTOCOL_TYPE::_TCP_ : AttackPattern::PROTOCOL_TYPE::_UDP_;
        } else if (tokenClass == "--attacktimeout" || tokenClass == "-ato") {
            attackTimeOut = std::stoul(token->getValue());
        } else if (tokenClass == "--message" || tokenClass == "-m") {
            message = token->getValue();
        }
    }

    AttackPattern *attack = new AttackPattern(
        protocolType,targetIPSource,port,
        threadAmount,attackTimeOut,connectionTimeOut,
        attackRange,message
    );

    startAttack(attack);
}

void Master::help() {
    Gui::help();
}
void Master::status() {}

void Master::exit() {
    //exit(1);
}

void Master::startAttack(AttackPattern *attack) {
    
}