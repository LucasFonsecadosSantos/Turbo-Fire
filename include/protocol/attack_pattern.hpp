#ifndef ATTACK_PATTERN_H
#define ATTACK_PATTERN_H 1

#include <string>
#include "protocol_type.hpp"

class AttackPattern {

	public:
		AttackPattern(
			//protocol
			//ip source
			//port
			//thread amount
			//attack time out
			//connection time out
			//attack range
			//message
		);
		~AttackPattern();
		ProtocolType getProtocol();
		std::string getIP();
		std::string getPackageMessage();
		unsigned int getPort();
		unsigned int getThreadAmount();
		unsigned int getAttackTimeOut();
		unsigned int getConnectionTimeOut();
		unsigned int getAttackRange();
		void setIP(std::string ipSource);
		void setProtocol(ProtocolType protocol);
		void setPackageMessage(std::string message);
		void setThreadAmount(unsigned int threadAmount);
		void setAttackTimeOut(unsigned int attackTimeOut);
		void setConnectionTimeOut(unsigned int connectionTimeOut);
		void setAttackRange(unsigned int attackRange);
		void setPort(unsigned int port);
	
	private:
		ProtocolType protocol;
		std::string ipSource;
		std::string message;
		unsigned int port;
		unsigned int threadAmount;
		unsigned int attackTimeOut;
		unsigned int connectionTimeOut;
		unsigned int attackRange;

};

#endif
