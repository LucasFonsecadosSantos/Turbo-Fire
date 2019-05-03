#include "../../include/view/gui.hpp"
#include <iostream>

inline void Gui::clear() {
    std::cout << "\x1B[2J\x1B[H";
}

void Gui::printSuceffullyMessage(std::string msg) {
    std::cout << "\033[0;97m" << "[" << "\033[0;92m" << "OK" << "\033[0;97m" << "] " << "\033[0;92m" << msg << "\033[0m\n";
}

void Gui::printErrorMessage(std::string msg) {
    std::cout << "\033[0;97m" << "[" << "\033[0;91m" << "FAILED" << "\033[0;97m" << "] " << "\033[0;91m" << msg << "\033[0m\n";
}

void Gui::printLogMessage(std::string title, std::string msg) {
    std::cout << "\033[0;97m" << "[" << "\033[0;96m" << title << "\033[0;97m" << "] " << "\033[0;96m" << msg << "\033[0m\n";
}

void Gui::masterOptions() {
    clear();
    std::cout << "+-----------------------------------------------------------+\n";
    std::cout << "|                 (             )    (     (    (           |\n";
    std::cout << "|    *   )        )\\ )   (   ( /(    )\\ )  )\\ ) )\\ )        |\n";
    std::cout << "|  ` )  /(    (  (()/( ( )\\  )\\())  (()/( (()/((()/( (      |\n";
    std::cout << "|   ( )(_))   )\\  /(_)))((_)((_)\\    /(_)) /(_))/(_)))\\     |\n";
    std::cout << "|  (_(_()) _ ((_)(_)) ((_)_   ((_)  (_))_|(_)) (_)) ((_)    |\n";
    std::cout << "|  |_   _|| | | || _ \\ | _ ) / _ \\  | |_  |_ _|| _ \\| __|   |\n";
    std::cout << "|    | |  | |_| ||   / | _ \\| (_) | | __|  | | |   /| _|    |\n";
    std::cout << "|    |_|   \\___/ |_|_\\ |___/ \\___/  |_|   |___||_|_\\|___|   |\n";
    std::cout << "+-----------------------------------------------------------+\n";
    std::cout << "| A free distributed denial of service attack simulator tool|\n";
    std::cout << "+-----------------------------------------------------------+\n";
    std::cout << "\n\n";
    std::cout << "Welcome to Turbo-Fire v1.0.1!\n";
    std::cout << "[master@turbo-fire] $";



}

void Gui::zombieOptions() {
    clear();
}