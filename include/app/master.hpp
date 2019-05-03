#ifndef MASTER_APP_H
#define MASTER_APP_H 1

#include "../view/gui.hpp"

class Master {

    public:
        Master();
        ~Master();
        
    private:
        unsigned short getUserInput();
        void startMaster();
};

#endif