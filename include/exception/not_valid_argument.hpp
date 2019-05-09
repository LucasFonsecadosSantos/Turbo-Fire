#ifndef NOT_VALID_ARGUMENT_EXCEPTION
#define NOT_VALID_ARGUMENT_EXCEPTION 1

#include <exception>

class NotValidArgument : public std::exception {

    public:
        const char* what() const noexcept{ return m_error; }
    private:
        std::string m_error = "Not valid command argument to make an attack simulation.";

};

#endif