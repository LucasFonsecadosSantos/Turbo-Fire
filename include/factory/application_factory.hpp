#ifndef APPLICATION_FACTORY_H
#define APPLICATION_FACTORY_H 1

class ApplicationFactory {
    
    public:
        enum applicationEnum {
            _MASTER_,
            _ZOMBIE_
        };
        static void* getInstance(ApplicationFactory::applicationEnum application);
    private:
};

#endif