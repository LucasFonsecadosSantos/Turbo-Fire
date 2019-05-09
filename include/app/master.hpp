#ifndef MASTER_APP_H
#define MASTER_APP_H 1

#include "../view/gui.hpp"
#include "../parser/token.hpp"
#include <vector>

class Master {

    public:
        Master();
        ~Master();
        
    private:
        void startMaster();
        void fire(std::vector<Token*> *tokens);
        void help();
        void status();
        void exit();
};

#endif