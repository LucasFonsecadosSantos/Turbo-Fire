#include "../../include/view/gui.hpp"
#include "../../include/protocol/attack_pattern.hpp"
#include "../../include/protocol/protocol_type.hpp"

#include <iostream>

int main() {
	unsigned short port = 23;
	unsigned short threadAmount = 10;
	unsigned short attackTimeOut = 15;
	unsigned short connectionTimeOut = 15;
	unsigned short attackRange = 15;
	AttackPattern *attack = new AttackPattern(ProtocolType::_TCP_,"192.168.0.1",port,threadAmount,attackTimeOut,connectionTimeOut,attackRange,"testel");
	attack->setIP("255.255.255.255");
	return 0;
}
