#ifndef VALIDATE_UTIL_H
#define VALIDATE_UTIL_H 1

#include <string>

class Validate {

	public:
		static bool generalIPValidation(std::string ipSource);
		static bool routeableIPValidation(std::string ipSource);
	
	private:
		bool generalOctetValidation(char *octet);

};

#endif
