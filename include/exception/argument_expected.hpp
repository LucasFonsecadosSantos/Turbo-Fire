#ifndef ARGUMENT_EXPECTED_EXCEPTION_H
#define ARGUMENT_EXPECTED_EXCEPTION_H 1

#include <exception>

class ArgumentExpected : public std::exception {

    public:
        const char* what() const noexcept{ return m_error; }
    private:
        const char* m_error = "An argument was expected in command. Consult: $ help";
};

#endif