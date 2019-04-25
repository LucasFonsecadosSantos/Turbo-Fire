#include "../../include/util/validate.hpp"

#include <string>
#include <iostream>

bool Validate::generalIPValidation(std::string ipSource) {
	if (ipSource.size() != 15) return false;
	char *octet = new char[3];
	generalOctetValidation(octet);
	for (unsigned i=0; i<=15; ++i) {
		if (i % 4 == 3) {
			//if (generalOctetValidation(octet)) return false;
			continue;
		} else {
			std::cout << ipSource.at(i) << " ";
			octet[i%4] = ipSource.at(i);
		}
	}
	return true;
}

bool Validate::routeableIPValidation(std::string ipSource) {
	if (sizeof(ipSource) != 15) return false;
	//to do
}

bool Validate::generalOctetValidation(char *octet) {
	int octetInt = std::stoi(octet);
	if (octetInt <= 255 && octetInt >= 1) return true;
	return false;
}
