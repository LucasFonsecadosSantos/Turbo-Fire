#include "../../include/app/zombie.hpp"
#include "../../include/app/master.hpp"
#include "../../include/factory/application_factory.hpp"

#include <iostream>

int main(int argc, char *argv[]) {
	if (argc == 2) {
		void *application;
		if (argv[1] == "master")
			application = ApplicationFactory::getInstance(ApplicationFactory::applicationEnum::_MASTER_);
		else
			application = ApplicationFactory::getInstance(ApplicationFactory::applicationEnum::_ZOMBIE_);
		std::cout << application;
	}
	return 0;
}
