#include "../../include/factory/application_factory.hpp"
#include "../../include/app/master.hpp"
#include "../../include/app/zombie.hpp"

void* ApplicationFactory::getInstance(ApplicationFactory::APPLICATION_ENUM application) {
    if (application == ApplicationFactory::APPLICATION_ENUM::_MASTER_) {
        return new Master();
    } else {
        return new Zombie();
    }
}