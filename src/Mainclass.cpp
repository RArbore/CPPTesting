#include "../include/Mainclass.h"

Mainclass::Mainclass():
    data()
{
    counter = 0;
    running = true;
    entities = list<Entity*>();
    keys = std::map<char, bool>();
    data.counter = &counter;
    data.running = &running;
    data.entities = &entities;
    data.keys = &keys;
}

void Mainclass::gameloop() {
    while (waiting) {}
    long ptime, atime, diff = 0;
    Player(&data, 0, 0);
    while (running) {
        ptime = getmillis();

        counter++;
        for (auto & e : entities) {
            (*e).tick();
        }

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

void Mainclass::iohandle() {
    Iohandler io(&data);
    while (running) {
        io.windowtick();
        keys['W'] = sf::Keyboard::isKeyPressed(sf::Keyboard::W);
        keys['A'] = sf::Keyboard::isKeyPressed(sf::Keyboard::A);
        keys['S'] = sf::Keyboard::isKeyPressed(sf::Keyboard::S);
        keys['D'] = sf::Keyboard::isKeyPressed(sf::Keyboard::D);
        waiting = false;
    }
}

void Mainclass::tick() {
    thread maintick(&Mainclass::gameloop, this);
    iohandle();
}