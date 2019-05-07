#include "../../include/app/master.hpp"
#include "../../include/view/gui.hpp"
#include <iostream>
Master::Master() {
    Gui::masterOptions();
}
Master::~Master() {}

unsigned short Master::getUserInput() {
    return 1;
}

void Master::startMaster() {

}