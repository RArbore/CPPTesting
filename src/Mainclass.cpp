#include "../include/Mainclass.h"

Mainclass::Mainclass():
    data(),
    map()
{
    counter = 0;
    cx = 0;
    cy = 0;
    running = true;
    entities = list<Entity*>();
    keys = std::map<char, bool>();
    data.counter = &counter;
    data.running = &running;
    data.entities = &entities;
    data.keys = &keys;
    data.map = &map;
    data.cx = &cx;
    data.cy = &cy;
}

void Mainclass::gameloop() {
    while (waiting) {}
    srand(time(NULL));
    long ptime, atime, diff = 0;
    Player(&data, 220, 200);
    for (int x = 0; x < data.MAP_WIDTH; x++) {
        vector<int> toadd;
        for (int y = 0; y < data.MAP_HEIGHT; y++) {
            if (y >= 160 || (x > 30 && x % 3 == 0 && y % 12 < 9 && rand() % 10 > 5)) {
                toadd.push_back(1);
            }
            else {
                toadd.push_back(0);
            }
        }
        map.push_back(toadd);
    }
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