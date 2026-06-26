#include "runtime.h"
#include <iostream>

void Runtime::publish(const Event& e) {
    std::lock_guard<std::mutex> lock(mtx);
    queue.push(e);
}

void Runtime::run() {
    while (true) {
        std::lock_guard<std::mutex> lock(mtx);
        if (!queue.empty()) {
            auto e = queue.front();
            queue.pop();

            std::cout << "[EVENT] " << e.type << std::endl;
        }
    }
}
