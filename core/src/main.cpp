#include "runtime.h"

int main() {
    Runtime rt;

    Event e{
        1,
        "VISION_ALERT",
        "camera_1",
        {{"risk", 0.92}}
    };

    rt.publish(e);
    rt.run();

    return 0;
}
