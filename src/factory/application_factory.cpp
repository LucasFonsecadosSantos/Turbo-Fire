#include "../../include/turbofire/factory/application_factory.hpp"
#include "../../include/turbofire/app/master.hpp"
#include "../../include/turbofire/app/slave.hpp"

void* ApplicationFactory::getInstance(ApplicationFactory::APPLICATION_ENUM application) {
    if (application == ApplicationFactory::APPLICATION_ENUM::_MASTER_) {
        return new Master();
    } else {
        return new Slave();
    }
}