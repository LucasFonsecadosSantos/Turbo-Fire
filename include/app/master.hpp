#ifndef MASTER_APP_H
#define MASTER_APP_H 1

#include "../view/gui.hpp"

class Master {

    public:
        Master();
        ~Master();
        
    private:
        void startMaster();
        void help();
        void status();
};

#endif