/**
 * +-------------------------------------------------+
 * +-------------------------------------------------+
 * + TURBO FIRE -------------------------------------+
 * + ------------------------------------------------+
 * +---------------------------------F1R3S3C T34M----+
 * 
 * \file gui.hpp
 * \brief This file has a user interface communication description.
 * \copyright COPYLEFT :)
 * This project is under GPLv3 (General Public License) version 3.
 */
#ifndef GUI_VIEW_H
#define GUI_VIEW_H 1

#include <string>

/**
 * \class Gui
 * \author Lucas Fonseca dos Santos (lucas@lcfcompany.com.br)
 * \date 2019-04-26
 * \version 1.0.002
 * \brief This class contains the user interface communication.
 * 
 * This class makes the user interface communication.
 */
class Gui {

    public:

        /**
		 * The Gui object constructor.
		 * \author Lucas Fonseca dos Santos
		 * \date 2019-04-26
		 * \version 1.0.002
		 */
        Gui();

        /**
		 * This method prints a successfully message.
		 * \author Lucas Fonseca dos Santos
		 * \date 2019-04-26
		 * \version 1.0.002
		 * 
		 * \param msg A success message.
		 */
        static void printSuceffullyMessage(std::string msg);

        /**
		 * This method prints a error message.
		 * \author Lucas Fonseca dos Santos
		 * \date 2019-04-26
		 * \version 1.0.002
		 * 
		 * \param msg A error message.
		 */
        static void printErrorMessage(std::string msg);

        /**
		 * This method prints a simple log message.
		 * \author Lucas Fonseca dos Santos
		 * \date 2019-04-26
		 * \version 1.0.002
		 * 
         * \param title The message title.
		 * \param msg A success message.
		 */
        static void printLogMessage(std::string title,std::string msg);
        static void masterOptions();
        static void zombieOptions();
        static inline void clear();
        static std::string getUserInput();
    
    private:

        std::string RESET = "\033[0m";
        
        std::string BLACK = "\033[0;30m";

        /**
         * Unix RED color string code. Constant value attribute.
         */
        std::string RED = "\033[0;31m";

        /**
         * Unix GREEN color string code. Constant value attribute.
         */
        std::string GREEN = "\033[0;32m";
    
        /**
         * Unix YELLOW color string code. Constant value attribute.
         */
        std::string YELLOW = "\033[0;33m";
        
        /**
         * Unix BLUE color string code. Constant value attribute.
         */
        std::string BLUE = "\033[0;34m";

        /**
         * Unix PURPLE color string code. Constant value attribute.
         */
        std::string PURPLE = "\033[0;35m";

        /**
         * Unix CYAN color string code. Constant value attribute.
         */
        std::string CYAN = "\033[0;36m";

        /**
         * Unix WHITE color string code. Constant value attribute.
         */
        std::string WHITE = "\033[0;37m";

        /**
         * BOLD COLORS PATTERN
         * Unix BLACK BOLD color string code. Constant value attribute.
         */
        std::string BLACK_BOLD = "\033[1;30m";

        /**
         * Unix RED BOLD color string code. Constant value attribute.
         */
        std::string RED_BOLD = "\033[1;31m";
        
        /**
         * Unix GREEN BOLD color string code. Constant value attribute.
         */
        std::string GREEN_BOLD = "\033[1;32m";
        
        /**
         * Unix YELLOW BOLD color string code. Constant value attribute.
         */
        std::string YELLOW_BOLD = "\033[1;33m";
        
        /**
         * Unix BLUE BOLD color string code. Constant value attribute.
         */
        std::string BLUE_BOLD = "\033[1;34m";
        
        /**
         * Unix PURPLE BOLD color string code. Constant value attribute.
         */
        std::string PURPLE_BOLD = "\033[1;35m";
        
        /**
         * Unix CYAN BOLD color string code. Constant value attribute.
         */
        std::string CYAN_BOLD = "\033[1;36m";
        
        /**
         * Unix WHITE BOLD color string code. Constant value attribute.
         */
        std::string WHITE_BOLD = "\033[1;37m";


        /**
         * COLORS AND UNDERLINE DECORATION PATTERN
         * Unix BLACK UNDERLINED color string code. Constant value attribute.
         */
        std::string BLACK_UNDERLINED = "\033[4;30m";

        /**
         * Unix RED UNDERLINED color string code. Constant value attribute.
         */
        std::string RED_UNDERLINED = "\033[4;31m";

        /**
         * Unix GREEN UNDERLINED color string code. Constant value attribute.
         */
        std::string GREEN_UNDERLINED = "\033[4;32m";

        /**
         * Unix YELLOW UNDERLINED color string code. Constant value attribute.
         */
        std::string YELLOW_UNDERLINED = "\033[4;33m";

        /**
         * Unix BLUE UNDERLINED color string code. Constant value attribute.
         */
        std::string BLUE_UNDERLINED = "\033[4;34m";

        /**
         * Unix PURPLE UNDERLINED color string code. Constant value attribute.
         */
        std::string PURPLE_UNDERLINED = "\033[4;35m";
        
        /**
         * Unix CYAN UNDERLINED color string code. Constant value attribute.
         */
        std::string CYAN_UNDERLINED = "\033[4;36m";

        /**
         * Unix WHITE UNDERLINED color string code. Constant value attribute.
         */
        std::string WHITE_UNDERLINED = "\033[4;37m";

        
        /**
         * BACKGROUND PATTERN
         * Unix BLACK BACKGROUND color string code.
         * Constant value attribute.
         */
        std::string BLACK_BACKGROUND = "\033[40m";
        
        /**
         * Unix RED BACKGROUND color string code.
         * Constant value attribute.
         */
        std::string RED_BACKGROUND = "\033[41m";

        /**
         * Unix GREEN BACKGROUND color string code.
         * Constant value attribute.
         */
        std::string GREEN_BACKGROUND = "\033[42m";

        /**
         * Unix YELLOW BACKGROUND color string code.
         * Constant value attribute.
         */
        std::string YELLOW_BACKGROUND = "\033[43m";

        /**
         * Unix BLUE BACKGROUND color string code.
         * Constant value attribute.
         */
        std::string BLUE_BACKGROUND = "\033[44m";

        /**
         * Unix PURPLE BACKGROUND color string code.
         * Constant value attribute.
         */
        std::string PURPLE_BACKGROUND = "\033[45m";

        /**
         * Unix CYAN BACKGROUND color string code.
         * Constant value attribute.
         */
        std::string CYAN_BACKGROUND = "\033[46m";

        /**
         * Unix WHITE BACKGROUND color string code.
         * Constant value attribute.
         */
        std::string WHITE_BACKGROUND = "\033[47m";

        /**
         * HIGHT INTENSITY COLORS PATTERN
         * Unix BLACK BRIGHT color string code.
         * Constant value attribute.
         */
        std::string BLACK_BRIGHT = "\033[0;90m";
        
        /**
         * Unix RED BRIGHT color string code.
         * Constant value attribute.
         */
        std::string RED_BRIGHT = "\033[0;91m";
        
        /**
         * Unix GREEN BRIGHT color string code.
         * Constant value attribute.
         */
        std::string GREEN_BRIGHT = "\033[0;92m";
        
        /**
         * Unix YELLOW BRIGHT color string code.
         * Constant value attribute.
         */
        std::string YELLOW_BRIGHT = "\033[0;93m";

        /**
         * Unix BLUE BRIGHT color string code.
         * Constant value attribute.
         */
        std::string BLUE_BRIGHT = "\033[0;94m";

        /**
         * Unix PURPLE BRIGHT color string code.
         * Constant value attribute.
         */
        std::string PURPLE_BRIGHT = "\033[0;95m";

        /**
         * Unix CYAN BRIGHT color string code.
         * Constant value attribute.
         */
        std::string CYAN_BRIGHT = "\033[0;96m";

        /**
         * Unix WHITE BRIGHT color string code.
         * Constant value attribute.
         */
        std::string WHITE_BRIGHT;

        
        /**
         * HIGH INTENSITY BOLD COLORS PATTERN
         * Unix BLACK BOLD BRIGHT color string code.
         * Constant value attribute.
         */
        std::string BLACK_BOLD_BRIGHT = "\033[1;90m";
        
        /**
         * Unix RED BOLD BRIGHT color string code.
         * Constant value attribute.
         */
        std::string RED_BOLD_BRIGHT = "\033[1;91m";
        
        /**
         * Unix GREEN BOLD BRIGHT color string code.
         * Constant value attribute.
         */
        std::string GREEN_BOLD_BRIGHT = "\033[1;92m";

        /**
         * Unix YELLOW BOLD BRIGHT color string code.
         * Constant value attribute.
         */
        std::string YELLOW_BOLD_BRIGHT = "\033[1;93m";

        /**
         * Unix BLUE BOLD BRIGHT color string code.
         * Constant value attribute.
         */
        std::string BLUE_BOLD_BRIGHT = "\033[1;94m";

        /**
         * Unix PURPLE BOLD BRIGHT color string code.
         * Constant value attribute.
         */
        std::string PURPLE_BOLD_BRIGHT = "\033[1;95m";

        /**
         * Unix CYAN BOLD BRIGHT color string code.
         * Constant value attribute.
         */
        std::string CYAN_BOLD_BRIGHT = "\033[1;96m";

        /**
         * Unix WHITE BOLD BRIGHT color string code.
         * Constant value attribute.
         */
        std::string WHITE_BOLD_BRIGHT = "\033[1;97m";

        /**
         * HIGH INTENSITY BACKGROUNDS PATTERN
         * Unix BLACK BACKGROUND BRIGHT color string code.
         * Constant value attribute.
         */
        std::string BLACK_BACKGROUND_BRIGHT = "\033[0;100m";
        
        /**
         * Unix RED BACKGROUND BRIGHT color string code.
         * Constant value attribute.
         */
        std::string RED_BACKGROUND_BRIGHT = "\033[1;101m";
        
        /**
         * Unix GREEN BACKGROUND BRIGHT color string code.
         * Constant value attribute.
         */
        std::string GREEN_BACKGROUND_BRIGHT = "\033[0;102m";

        /**
         * Unix YELLOW BACKGROUND BRIGHT color string code.
         * Constant value attribute.
         */
        std::string YELLOW_BACKGROUND_BRIGHT = "\033[30;103m";

        /**
         * Unix BLUE BACKGROUND BRIGHT color string code.
         * Constant value attribute.
         */
        std::string BLUE_BACKGROUND_BRIGHT = "\033[0;104m";

        /**
         * Unix PURPLE BACKGROUND BRIGHT color string code.
         * Constant value attribute.
         */ 
        std::string PURPLE_BACKGROUND_BRIGHT = "\033[0;105m";

        /**
         * Unix CYAN BACKGROUND BRIGHT color string code.
         * Constant value attribute.
         */
        std::string CYAN_BACKGROUND_BRIGHT = "\033[0;106m";

        /**
         * Unix WHITE BACKGROUND BRIGHT color string code.
         * Constant value attribute.
         */
        std::string WHITE_BACKGROUND_BRIGHT = "\033[0;107m";
};

#endif
