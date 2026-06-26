#pragma once
#include <string>
#include <nlohmann/json.hpp>

struct Event {
    uint64_t ts;
    std::string type;
    std::string source;
    nlohmann::json payload;
};
