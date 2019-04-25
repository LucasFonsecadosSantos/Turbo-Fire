#include "../../include/view/gui.hpp"
#include "../../include/protocol/attack_pattern.hpp"

#include <iostream>

int main() {
	AttackPattern *attack = new AttackPattern();
	attack->setIP("255.255.255.255");
	return 0;
}
