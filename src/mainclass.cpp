#include "../include/mainclass.h"

using namespace std;
using namespace std::chrono;

mainclass::mainclass() {
    counter = 0;
    running = true;
}

void mainclass::gameloop() {
    long ptime, atime, diff = 0;
    while (running) {
        ptime = getmillis();
        counter++;


        atime = getmillis();
        diff = atime-ptime;
        if (diff <= 0) {
            diff = 1;
            this_thread::sleep_for(std::chrono::milliseconds(1));
        }
        while (1000/diff > MAX_TPS) {
            atime = getmillis();
            diff = atime - ptime;
            if (diff <= 0) {
                diff = 1;
            }
        }
    }
}

long mainclass::getmillis() {
    std::chrono::time_point<std::chrono::system_clock> now =
            std::chrono::system_clock::now();
    auto duration = now.time_since_epoch();
    return std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();
}

void mainclass::tick() {
    thread maintick(&mainclass::gameloop, this);
    iohandler io(this);
    while (running) {
        io.windowtick();
    }
}