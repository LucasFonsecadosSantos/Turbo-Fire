#include "../../include/factory/application_factory.hpp"
#include "../../include/app/master.hpp"
#include "../../include/app/zombie.hpp"

void* ApplicationFactory::getInstance(ApplicationFactory::applicationEnum application) {
    if (application == ApplicationFactory::applicationEnum::_MASTER_) {
        return new Master();
    } else {
        return new Zombie();
    }
}