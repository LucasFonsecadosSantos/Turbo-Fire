#ifndef THREAD_RUNNER_UTIL_H
#define THREAD_RUNNER_UTIL_H 1

class ThreadRunner {

    public:
        ThreadRunner();
        ~ThreadRunner();
        void run(void *task);
};

#endif