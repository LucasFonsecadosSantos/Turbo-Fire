#ifndef PORT_OUT_OF_RANGE_EXCEPTION_H
#define PORT_OUT_OF_RANGE_EXCEPTION_H 1

#include <exception>

class PortOutOfRange : public std::exception {
    public:
        const char* what() const noexcept{ return m_error; }
    private:
        const char* m_error = "The port number must be between 1 to 65535.";
};

#endif