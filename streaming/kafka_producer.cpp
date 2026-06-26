#include <librdkafka/rdkafkacpp.h>

class Producer {
public:
    void send(const std::string& msg) {
        std::cout << "[Kafka] " << msg << std::endl;
    }
};
