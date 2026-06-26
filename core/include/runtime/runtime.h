#pragma once
#include "event.h"
#include <queue>
#include <mutex>

class Runtime {
public:
    void publish(const Event& e);
    void run();

private:
    std::queue<Event> queue;
    std::mutex mtx;
};
