#include "../../include/turbofire/app/slave.hpp"
#include "../../include/turbofire/app/master.hpp"
#include "../../include/turbofire/factory/application_factory.hpp"

int main(int argc, char *argv[]) {
	if (argc == 2) {
		if (argv[1] == "slave") {
			Slave *application = static_cast<Slave*>(ApplicationFactory::getInstance(ApplicationFactory::APPLICATION_ENUM::_SLAVE_));
		} else {
			Master *application = static_cast<Master*>(ApplicationFactory::getInstance(ApplicationFactory::APPLICATION_ENUM::_MASTER_));
		}
	}
	return 0;
}
