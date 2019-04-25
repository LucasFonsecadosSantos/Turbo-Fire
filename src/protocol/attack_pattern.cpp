#include "../../include/protocol/attack_pattern.hpp"
#include "../../include/protocol/protocol_type.hpp"
#include "../../include/util/validate.hpp"

#include <string>
#include <iostream>

AttackPattern::AttackPattern() {

}

AttackPattern::~AttackPattern() {
}

void AttackPattern::setIP(std::string ipSource) {
	if (Validate::generalIPValidation(ipSource)) {
		std::cout << "valido";
		this->ipSource = ipSource;
	} else {
		//needs implement a exception
		std::cout << "~valido";
	}
}
