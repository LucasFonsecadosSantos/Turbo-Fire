#ifndef NOT_ROUTEABLE_IP_EXCEPTION_H
#define NOT_ROUTEABLE_IP_EXCEPTION_H 1

#include <exception>

class NotRouteableIP : public std::exception {

    public:
        //NotRouteableIP();
        const char* what() const noexcept{ return m_error; }
    private:
        const char* m_error = "Not routeable IP address exception.";
};

#endif