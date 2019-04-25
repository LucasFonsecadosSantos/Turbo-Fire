#include "../../include/view/gui.hpp"
#include <iostream>

void Gui::printSuceffullyMessage(std::string msg) {
    std::cout << "\033[0;97m" << "[" << "\033[0;92m" << "OK" << "\033[0;97m" << "] " << "\033[0;92m" << msg << "\033[0m\n";
}

void Gui::printErrorMessage(std::string msg) {
    std::cout << "\033[0;97m" << "[" << "\033[0;91m" << "FAILED" << "\033[0;97m" << "] " << "\033[0;91m" << msg << "\033[0m\n";
}

void Gui::printLogMessage(std::string title, std::string msg) {
    std::cout << "\033[0;97m" << "[" << "\033[0;96m" << title << "\033[0;97m" << "] " << "\033[0;96m" << msg << "\033[0m\n";
}
