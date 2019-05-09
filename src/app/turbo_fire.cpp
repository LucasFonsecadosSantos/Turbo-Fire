#include "../../include/app/zombie.hpp"
#include "../../include/app/master.hpp"
#include "../../include/factory/application_factory.hpp"

int main(int argc, char *argv[]) {
	if (argc == 2) {
		if (argv[1] == "zombie") {
			Zombie *application = static_cast<Zombie*>(ApplicationFactory::getInstance(ApplicationFactory::APPLICATION_ENUM::_ZOMBIE_));
		} else {
			Master *application = static_cast<Master*>(ApplicationFactory::getInstance(ApplicationFactory::APPLICATION_ENUM::_MASTER_));
		}
	}
	return 0;
}
