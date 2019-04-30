#include "../../include/util/validate.hpp"

#include <string>
#include <iostream>

bool Validate::generalIPValidation(std::string ipSource) {
	if (ipSource.size() > 15) return false;
	char *octet = new char[3];
	for (unsigned i=0; i<=15; ++i) {
		if (i % 4 == 3) {
			if (!generalOctetValidation(octet)) return false;
		} else {
			octet[i%4] = ipSource.at(i);
		}
	}
	return true;
}

bool Validate::routeableIPValidation(std::string ipSource) {
	if (sizeof(ipSource) > 15) return false;
	//to do
}

inline bool Validate::generalOctetValidation(char *octet) {
	return (std::stoi(octet) <= 255 && std::stoi(octet) >= 1);
}

bool Validate::portValidation(unsigned short port) {
	return (port >= 0 && port <= 65535);
}