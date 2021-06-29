#include "../../include/core/application_bootstrap.hpp"
#include "../../include/parser/init_argument_parser.hpp"

ApplicationBootstrap::ApplicationBootstrap(int argc, char **argv) {

    processArguments(argc, argv);

}

ApplicationBootstrap::~ApplicationBootstrap() {}

void ApplicationBootstrap::processArguments(int argc, char **argv) {

    this->parser = new Parser();
    this->parser->setStrategy(new InitArgumentParser());
    //this->parser->setCorpus(Parser::convertCharArrayToString(argc, argv));

}