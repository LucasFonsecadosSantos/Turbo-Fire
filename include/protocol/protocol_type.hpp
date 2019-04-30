/**
 * +-------------------------------------------------+
 * +-------------------------------------------------+
 * + TURBO FIRE -------------------------------------+
 * + ------------------------------------------------+
 * +---------------------------------F1R3S3C T34M----+
 * 
 * \file protocol_type.hpp
 * \brief This file has a simple protocol enum type.
 * \copyright COPYLEFT :)
 * This project is under GPLv3 (General Public License) version 3.
 */
#ifndef PROTOCOL_TYPE_PROTOCOL
#define PROTOCOL_TYPE_PROTOCOL 1

/**
 * \class ProtocolType
 * \author Lucas Fonseca dos Santos (lucas@lcfcompany.com.br)
 * \date 2019-04-26
 * \version 1.0.002
 * \brief This class provides a simple protocol enum type.
 * 
 * This protocol enum type helps to organizes the information
 * in attack pattern object.
 */
class ProtocolType {

	public:
		enum type {
			_TCP_,
			_UDP_
		};
};

#endif
