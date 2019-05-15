#include "../../include/turbofire/util/validate.hpp"
#include "../../include/turbofire/parser/parser.hpp"

#include <string>
#include <vector>

bool Validate::generalIPValidation(std::string ipSource) {
	if (ipSource.size() > 15) return false;
	std::vector<unsigned short> *octets = Parser::getIPTokens(ipSource);
	for (std::vector<unsigned short>::iterator octet = octets->begin(); octet != octets->end(); ++octet)
		if (!generalOctetValidation(*octet)) return false;
	return true;
}

bool Validate::routeableIPValidation(std::string ipSource) {
	if (!generalIPValidation(ipSource)) return false;
	std::vector<unsigned short> *octets = Parser::getIPTokens(ipSource);
	if (octets->at(0) == 10) {
		return false;
	} else if (octets->at(0) == 172) {
		return (octets->at(1) <= 31 || octets->at(1) >= 16);
	} else {
		return (octets->at(0) == 192 && octets->at(1) == 168);
	}
}

bool Validate::generalOctetValidation(unsigned short octet) {
	return (octet <= 255 && octet >= 1);
}

bool Validate::portValidation(unsigned short port) {
	return (port > 0 && port <= 65535);
}
