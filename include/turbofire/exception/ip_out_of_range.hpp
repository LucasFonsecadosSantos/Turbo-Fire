#ifndef IP_OUT_OF_RANGE_EXCEPTION_H
#define IP_OUT_OF_RANGE_EXCEPTION_H 1

#include <exception>

class IPOutOfRange : public std::exception {

    public:
        //IPOutOfRange();
        const char* what() const noexcept{ return m_error; }
    private:
        const char* m_error = "IP address out of valid IP range exception.";
};

#endif