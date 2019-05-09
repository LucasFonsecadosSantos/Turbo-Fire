#include "../../include/protocol/attack_pattern.hpp"
#include "../../include/util/validate.hpp"

#include <string>
#include <iostream>

AttackPattern::AttackPattern(
	PROTOCOL_TYPE protocol,
	std::string targetIPSource,
	unsigned short port,
	unsigned short threadAmount,
	unsigned short attackTimeOut,
	unsigned short connectionTimeOut,
	unsigned short attackRange,
	std::string message
) {
	this->validator = new Validate();
	this->setIP(targetIPSource);
	this->setProtocol(protocol);
	this->setPort(port);
	this->setThreadAmount(threadAmount);
	this->setConnectionTimeOut(connectionTimeOut);
	this->setAttackRange(attackRange);
	this->setPackageMessage(message);
}

AttackPattern::~AttackPattern() {
}

void AttackPattern::setIP(std::string ipSource) {
	if (ipSource == "") {
		this->targetIPSource = "192.168.0.1";
	} else if (this->validator->generalIPValidation(ipSource)) {
		this->targetIPSource = ipSource;
	} else {
		//needs implement a exception
	}
}

void AttackPattern::setPort(unsigned short port) {
	if (this->validator->portValidation(port)) {
		this->port = port;
	} else {
		//need implement a exception
	}
}

void AttackPattern::setProtocol(PROTOCOL_TYPE protocol) {
	this->protocol = protocol;
}

void AttackPattern::setThreadAmount(unsigned short amount) {
	this->threadAmount = amount;
}

void AttackPattern::setPackageMessage(std::string message) {
	this->message = message;
}

void AttackPattern::setConnectionTimeOut(unsigned short connectionTimeOut) {
	this->connectionTimeOut = connectionTimeOut;
}

void AttackPattern::setAttackRange(unsigned short attackRange) {
	this->attackRange = attackRange;
}

AttackPattern::PROTOCOL_TYPE AttackPattern::getProtocol() {
	return this->protocol;
}

std::string AttackPattern::getIP() {
	return this->targetIPSource;
}

std::string AttackPattern::getPackageMessage() {
	return this->message;
}

unsigned short AttackPattern::getPort() {
	return this->port;
}

unsigned short AttackPattern::getThreadAmount() {
	return this->threadAmount;
}

unsigned short AttackPattern::getAttackTimeOut() {
	return this->attackTimeOut;
}

unsigned short AttackPattern::getConnectionTimeOut() {
	return this->connectionTimeOut;
}

unsigned short AttackPattern::getAttackRange() {
	return this->attackRange;
}