#include "../include/Mainclass.h"

Mainclass::Mainclass() {
    counter = 0;
    running = true;
    entities = list<Entity*>();
    data = Global();
    data.counter = &counter;
    data.running = &running;
    data.entities = &entities;
}

void Mainclass::gameloop() {
    long ptime, atime, diff = 0;
    Player(&data, 10, 10);
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

long Mainclass::getmillis() {
    std::chrono::time_point<std::chrono::system_clock> now =
            std::chrono::system_clock::now();
    auto duration = now.time_since_epoch();
    return std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();
}

void Mainclass::tick() {
    thread maintick(&Mainclass::gameloop, this);
    Iohandler io(&data);
    while (running) {
        io.windowtick();
    }
}