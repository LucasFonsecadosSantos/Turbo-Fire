#include "../../include/protocol/attack_pattern.hpp"
#include "../../include/util/validate.hpp"
#include "../../include/exception/ip_out_of_range.hpp"
#include "../../include/exception/not_routeable_ip.hpp"
#include "../../include/exception/not_valid_argument.hpp"
#include "../../include/exception/port_out_of_range.hpp"

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
		throw IPOutOfRange();
	}
}

void AttackPattern::setPort(unsigned short port) {
	if (port == AttackPattern::UNKNOW) {
		this->port = 80;
	} else if (this->validator->portValidation(port)) {
		this->port = port;
	} else {
		throw PortOutOfRange();
	}
}

void AttackPattern::setProtocol(PROTOCOL_TYPE protocol) {
	this->protocol = (protocol == AttackPattern::PROTOCOL_TYPE::_UNKNOW_) ? AttackPattern::PROTOCOL_TYPE::_TCP_ : protocol;
}

void AttackPattern::setThreadAmount(unsigned short amount) {
	this->threadAmount = (amount == AttackPattern::UNKNOW) ? 1 : amount;
}

void AttackPattern::setPackageMessage(std::string message) {
	this->message = message;
}

void AttackPattern::setConnectionTimeOut(unsigned short connectionTimeOut) {
	this->connectionTimeOut = (connectionTimeOut == AttackPattern::UNKNOW) ? 100 : connectionTimeOut;
}

void AttackPattern::setAttackRange(unsigned short attackRange) {
	this->attackRange = (attackRange == AttackPattern::UNKNOW) ? 1 : attackRange;
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

std::string AttackPattern::toString() {
	return ""; 
}