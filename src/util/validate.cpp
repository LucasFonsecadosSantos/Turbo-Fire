#include "../../include/util/validate.hpp"

#include <string>

bool Validate::generalIPValidation(std::string ipSource) {
	if (sizeof(ipSource) != 15) return false;
	char *octet = new char[3];
	for (unsigned i=1; i<=15; ++i) {
		if (i % 4 == 0) {
			if (!generalOctetValidation(&octet)) return false;
			
		} else {
			octet[i%4] = ipSource.at(i);
		}
	}
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
