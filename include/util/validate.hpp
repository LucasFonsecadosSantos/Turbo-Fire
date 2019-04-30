/**
 * +-------------------------------------------------+
 * +-------------------------------------------------+
 * + TURBO FIRE -------------------------------------+
 * + ------------------------------------------------+
 * +---------------------------------F1R3S3C T34M----+
 * 
 * \file validate.hpp
 * \brief This file has a validator class description.
 * \copyright COPYLEFT :)
 * This project is under GPLv3 (General Public License) version 3.
 */
#ifndef VALIDATE_UTIL_H
#define VALIDATE_UTIL_H 1

#include <string>

/**
 * \class Validate
 * \author Lucas Fonseca dos Santos (lucas@lcfcompany.com.br)
 * \date 2019-04-26
 * \version 1.0.002
 * \brief This class is responsible for validating some things.
 * 
 * The validator class is responsivble for validates some informations
 * inputed by the user, as:
 * - IP source;
 * - Port source;
 * - ...
 */
class Validate {

	public:

		/**
		 * This method valids any ip source inputed.
		 * \author Lucas Fonseca dos Santos
		 * \date 2019-04-26
		 * \version 1.0.002
		 * 
		 * \param ipSource The IP source inputed.
		 * \return The validation result.
		 */
		bool generalIPValidation(std::string ipSource);
		
		/**
		 * This method verifys if a IP source is a routeable
		 * ip address.
		 * \author Lucas Fiorini Braga
		 * \date 2019-04-30
		 * \version 1.0.002
		 * 
		 * \param ipSource The target IP address.
		 * \return The validation result.
		 */
		static bool routeableIPValidation(std::string ipSource);
		
		/**
		 * The port validation method is responsible for validating
		 * if a port number is in valid system port range.
		 * \author Lucas Fonseca dos Santos
		 * \date 2019-04-26
		 * \version 1.0.002
		 * 
		 * \param port A port number.
		 * \return The validation result.
		 */
		bool portValidation(unsigned short port);

	private:

		/**
		 * This method verifys if a IP address octet 
		 * is valid.
		 * \author Lucas Fonseca dos Santos
		 * \date 2019-04-26
		 * \version 1.0.002
		 * 
		 * \param octet A IP address octet.
		 * \return The validation result.
		 */
		inline bool generalOctetValidation(char *octet);

};

#endif
