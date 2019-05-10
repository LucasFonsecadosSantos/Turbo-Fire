#ifndef APPLICATION_FACTORY_H
#define APPLICATION_FACTORY_H 1

class ApplicationFactory {
    
    public:
        enum APPLICATION_ENUM {
            _MASTER_,
            _SLAVE_
        };
        static void* getInstance(ApplicationFactory::APPLICATION_ENUM application);
    private:
};

#endif