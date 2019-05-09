/**
 * +-------------------------------------------------+
 * +-------------------------------------------------+
 * + TURBO FIRE -------------------------------------+
 * + ------------------------------------------------+
 * +---------------------------------F1R3S3C T34M----+
 * 
 * \file attack_pattern.hpp
 * \brief This file has the attack protocol for comunication with zombie hosts.
 * \copyright COPYLEFT :)
 * This project is under GPLv3 (General Public License) version 3.
 */
#ifndef ATTACK_PATTERN_H
#define ATTACK_PATTERN_H 1

#include <string>
#include "../util/validate.hpp"

/**
 * \class AttackPattern
 * \author Lucas Fonseca dos Santos (lucas@lcfcompany.com.br)
 * \date 2019-04-26
 * \version 1.0.002
 * \brief AttackPattern is the protocol for attack order communication between master and zombies host.
 * 
 * The AttackPattern object is used to organizes the attack
 * operation order communications between master and zombies host.
 * It contains the whole attack informations as:
 * - Target host ip source;
 * - Target port;
 * - Connection time out;
 * - Attack time out;
 * - Zombie thread amount;
 * - Protocol will be used;
 * - The content of packages (message);
 * These informations are very necessary to zombie host makes the
 * attack to some server.
 */
class AttackPattern {

	public:

		enum PROTOCOL_TYPE {
			_UNKNOW_,
			_TCP_,
			_UDP_
		};

		static const unsigned short UNKNOW = 0;
		/**
		 * The AttackPattern constructor.
		 * \author Lucas Fonseca dos Santos
		 * \date 2019-04-26
		 * \version 1.0.002
		 * 
		 * \param protocol The protocol type used in attack.
		 * \param targetIPSource The attack target ip source.
		 * \param port The port that will be attacked.
		 * \param threadAmount The zombie thread amount used in attack.
		 * \param attackTimeOut The time limit or time out of the whole attack.
		 * \param connectionTimeOut The time limit or connection time out. (Package per package).
		 * \param attackRange Attack range.
		 * \param message A text message transmited by the attack package.
		 */
		AttackPattern(
			PROTOCOL_TYPE 	protocol,
			std::string 	targetIPSource,
			unsigned short	port,
			unsigned short	threadAmount,
			unsigned short	attackTimeOut,
			unsigned short	connectionTimeOut,
			unsigned short	attackRange,
			std::string 	message
		);

		/**
		 * The AttackPattern destructor.
		 * \author Lucas Fonseca dos Santos
		 * \date 2019-04-26
		 * \version 1.0.002
		 */
		~AttackPattern();

		/**
		 * Protocol attribute accessor method.
		 * \author Lucas Fonseca dos Santos
		 * \date 2019-04-26
		 * \version 1.0.002
		 * 
		 * \return A protocol enum type.
		 */
		PROTOCOL_TYPE getProtocol();

		/**
		 * Target IP source attribute accessor method.
		 * \author Lucas Fonseca dos Santos
		 * \date 2019-04-26
		 * \version 1.0.002
		 * 
		 * \return The target IP source string.
		 */
		std::string getIP();

		/**
		 * Message attribute accessor method.
		 * \author Lucas Fonseca dos Santos
		 * \date 2019-04-26
		 * \version 1.0.002
		 * 
		 * \return The package message content.
		 */
		std::string getPackageMessage();

		/**
		 * The port attribute accessor method.
		 * \author Lucas Fonseca dos Santos
		 * \date 2019-04-26
		 * \version 1.0.002
		 * 
		 * \return The port target connection number.
		 */
		unsigned short getPort();

		/**
		 * Thread amount attribute accessor method.
		 * \author Lucas Fonseca dos Santos
		 * \date 2019-04-26
		 * \version 1.0.002
		 * 
		 * \return The zombie thread amount.
		 */
		unsigned short getThreadAmount();

		/**
		 * Attack time out attribute accessor method.
		 * \author Lucas Fonseca dos Santos
		 * \date 2019-04-26
		 * \version 1.0.002
		 * 
		 * \return The lime limit for attack.
		 */
		unsigned short getAttackTimeOut();

		/**
		 * Connection time out attribute accessor method.
		 * \author Lucas Fonseca dos Santos
		 * \date 2019-04-26
		 * \version 1.0.002
		 * 
		 * \return The connection time limit.
		 */
		unsigned short getConnectionTimeOut();

		/**
		 * The attack range attribute accessor method.
		 * \author Lucas Fonseca dos Santos
		 * \date 2019-04-26
		 * \version 1.0.002
		 * 
		 * \return Attack range value.
		 */
		unsigned short getAttackRange();

		/**
		 * The target IP source modifier method.
		 * \author Lucas Fonseca dos Santos
		 * \date 2019-04-26
		 * \version 1.0.002
		 * 
		 * \param ipSource The target IP address.
		 */
		void setIP(std::string ipSource);

		/**
		 * Protocol attribute modifier method.
		 * \author Lucas Fonseca dos Santos
		 * \date 2019-04-26
		 * \version 1.0.002
		 * 
		 * \param protocol The protocol will be used in attack.
		 */
		void setProtocol(PROTOCOL_TYPE protocol);

		/**
		 * Message attribute modifier method.
		 * \author Lucas Fonseca dos Santos
		 * \date 2019-04-26
		 * \version 1.0.002
		 * 
		 * \param message The packages text message content.
		 */
		void setPackageMessage(std::string message);

		/**
		 * Thread Amount attribute modifier method.
		 * \author Lucas Fonseca dos Santos
		 * \date 2019-04-26
		 * \version 1.0.002
		 * 
		 * \param threadAmount The zombie thread amount.
		 */
		void setThreadAmount(unsigned short threadAmount);

		/**
		 * Attack time out modifier method.
		 * \author Lucas Fonseca dos Santos
		 * \date 2019-04-26
		 * \version 1.0.002
		 * 
		 * \param attackTimeOut The attack time out.
		 */
		void setAttackTimeOut(unsigned short attackTimeOut);
		
		/**
		 * Connection time out modifier method.
		 * \author Lucas Fonseca dos Santos
		 * \date 2019-04-30
		 * \version 1.0.002
		 * 
		 * \param connectionTimeOut The connection time out value.
		 */
		void setConnectionTimeOut(unsigned short connectionTimeOut);
		
		/**
		 * Attack range modifier method.
		 * \author Lucas Fonseca dos Santos
		 * \date 2019-04-30
		 * \version 1.0.002
		 * 
		 * \param attackRange The attack range.
		 */
		void setAttackRange(unsigned short attackRange);
		
		/**
		 * Port modifier method.
		 * \author Lucas Fonseca dos Santos
		 * \date 2019-04-30
		 * \version 1.0.002
		 * 
		 * \param port The target port number.
		 */
		void setPort(unsigned short port);

		std::string toString();
	
	private:

		Validate *validator;
		PROTOCOL_TYPE protocol;
		std::string targetIPSource;
		std::string message;
		unsigned short port;
		unsigned short threadAmount;
		unsigned short attackTimeOut;
		unsigned short connectionTimeOut;
		unsigned short attackRange;
};

#endif
