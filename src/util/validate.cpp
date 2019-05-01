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
	delete[] octet;
	return true;
}

bool Validate::routeableIPValidation(std::string ipSource) {
	if (ipSource.size() > 15) return false;
		int* ipInt = getOctet(ipSource);
	if (ipInt[0] == 10) {
			return false;
	} else if(ipInt[0] == 172) {
		if(ipInt[1] > 31 or  ipInt[1] < 16) {
			return true;
		} else {
			return false;
		}
	} else if (ipInt[0] == 192 and ipInt[1] == 168) {
		return false;
	} else {
		return true;
	}
	delete[] ipInt;
}

inline bool Validate::generalOctetValidation(char *octet) {
	return (std::stoi(octet) <= 255 && std::stoi(octet) >= 1);
}

bool Validate::portValidation(unsigned short port) {
	return (port >= 0 && port <= 65535);
}

//return pointer to array with acotet values
int* Validate::getOctet(std::string ipSource) {
	int* ipArr = new int[4];//array with octet values
	char* octet = new char[3];
	int j = 0;
	for(unsigned i = 0; i < 15; i++) {
		if(i % 4 == 3) {
			ipArr[j] = std::stoi(octet);
			j++;
		} else {
			octet[i%4] = ipSource.at(i);
		}
	}
	delete[] octet;
	return ipArr;
}

