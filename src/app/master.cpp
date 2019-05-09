#include "../../include/app/master.hpp"
#include "../../include/view/gui.hpp"
#include "../../include/parser/parser.hpp"
#include "../../include/parser/token.hpp"
#include "../../include/protocol/attack_pattern.hpp"

#include <cstddef>
#include <iostream> //to delete

Master::Master() {
    Gui::masterOptions();
    startMaster();
}

Master::~Master() {}

void Master::startMaster() {
    Parser *parser = new Parser();
    std::vector<Token*> *tokens = parser->getCommandTokens(Gui::getUserInput());
    std::string firstToken = tokens->at(0)->getClass();
    
    if (firstToken == "fire") {
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
    } else if (firstToken == "help") {
        help();
    } else if (firstToken == "status") {
        status();
    }
}

void Master::help() {}
void Master::status() {}