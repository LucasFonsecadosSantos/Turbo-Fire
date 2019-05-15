#include "../../include/turbofire/view/gui.hpp"
#include <iostream>
#include <string>

void Gui::help() {
    clear();
    std::cout << "+-----------------------------------------------------------+\n";
    std::cout << "| # HELP INFORMATIONS                                       |\n";
    std::cout << "+-----------------------------------------------------------+\n";
    std::cout << "|                                                           |\n";
    std::cout << "| *How can you start a simulation?                          |\n";
    std::cout << "|                                                           |\n";
    std::cout << "| $ fire <args>                                             |\n";
    std::cout << "|                                                           |\n";
    std::cout << "| *Attack Params                                            |\n";
    std::cout << "|                                                           |\n";
    std::cout << "|     --port,         -p  (port number. ]0;65535] )         |\n";
    std::cout << "|     --protocol,     -pt (protocol will be used)           |\n";
    std::cout << "|     --target,       -t  (target IP address)               |\n";
    std::cout << "|     --thread,       -th (Slave thread amount)             |\n";
    std::cout << "|     --timeout,      -to (Connection time out)             |\n";
    std::cout << "|     --range,        -t  (Attack range)                    |\n";
    std::cout << "|     --attacktimeout -ato(Attack time out)                 |\n";
    std::cout << "|     --message       -m  (Package text message)            |\n";
    std::cout << "|                                                           |\n";
    std::cout << "| *Example:                                                 |\n";
    std::cout << "|                                                           |\n";
    std::cout << "| $ fire --target 192.168.0.1 -p 80 -protocol tcp -th 20    |\n";
    std::cout << "|                                                           |\n";
    std::cout << "+-----------------------------------------------------------+\n";
    std::cout << "| # ABOUT TURBO FIRE                                        |\n";
    std::cout << "+-----------------------------------------------------------+\n";
    std::cout << "|                                                           |\n";
    std::cout << "| Developed under General Public License (GPLv3).           |\n";
    std::cout << "| Written by Lucas Fonseca dos Santos.                      |\n";
    std::cout << "| Contribution by Lucas Fiorini Braga.                      |\n";
    std::cout << "|                                                           |\n";
    std::cout << "+-----------------------------------------------------------+\n";
}

std::string Gui::getUserInput() {
    std::cout << "[master@turbo-fire] $ ";
    std::string x;
    getline(std::cin, x);
    return x;
}

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
}

void Gui::slaveOptions() {
    clear();
}