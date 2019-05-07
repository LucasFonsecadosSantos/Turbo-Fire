#include "../../include/app/master.hpp"
#include "../../include/view/gui.hpp"
#include "../../include/parser/parser.hpp"
#include <iostream> //to delete

Master::Master() {
    Gui::masterOptions();
    startMaster();
}
Master::~Master() {}

unsigned short Master::getUserInput() {
    return 1;
}

void Master::startMaster() {
    
}