#include "../include/Mainclass.h"

Mainclass::Mainclass():
        data(),
        map(),
        entities()
{
    counter = 0;
    cx = 0;
    cy = 0;
    running = true;
    map_done = false;
    keys = std::map<char, bool>();
    data.running = &running;
    data.entities = &entities;
    data.keys = &keys;
    data.map = &map;
    data.cx = &cx;
    data.cy = &cy;
    data.map_done = &map_done;
}

void Mainclass::genmap() {
    ifstream inFile;
    if (PLATFORM_NAME == "osx") {
        inFile.open("maps/map3.csv");
    }
    else if (PLATFORM_NAME == "windows") {
        inFile.open("maps\\map3.csv");
    }
    string input;
    getline(inFile, input);
    inFile.close();
    vector<int> splitted;
    while (!input.empty()) {
        if (input.find(',') == string::npos) {
            splitted.push_back(stoi(input));
            input = "";
        }
        else {
            string token = input.substr(0, input.find(','));
            input.erase(0, input.find(',') + 1);
            splitted.push_back(stoi(token));
        }
    }
    data.MAP_WIDTH = splitted.at(0);
    data.MAP_HEIGHT = splitted.at(1);
    for (int x = 0; x < data.MAP_WIDTH; x++) {
        vector<int> toadd;
        for (int y = 0; y < data.MAP_HEIGHT; y++) {
            int value = splitted.at(x+y*data.MAP_WIDTH+2);
            if (value == 2) {
                entities.push_back(new Player(&data, x*16, y*16-10));
                value = 0;
            }
            else if (value == 3) {
                entities.push_back(new CrackedBlock(&data, x*16, y*16));
                value = 0;
            }
            else if (value == 4) {
                entities.push_back(new RainCloud(&data, x*16, y*16));
                value = 0;
            }
            else if (value == 5) {
                entities.push_back(new Coin(&data, x*16, y*16));
                value = 0;
            }
            toadd.push_back(value);
        }
        map.push_back(toadd);
    }
    map_done = true;
}

void Mainclass::resetmap() {
    map_done = false;
    while (!io->isWaiting) {}
    vector<Entity*> temp;
    for (Entity* e : entities) {
        temp.push_back(e);
    }
    for (Entity* e : temp) {
        entities.erase(std::find(entities.begin(), entities.end(), e));
        delete e;
    }
    counter = 0;
    genmap();
}

void Mainclass::gameloop() {
    while (waiting) {}
    srand(getmillis());
    long ptime, atime, diff = 0;
    genmap();
    while (running) {
        ptime = getmillis();

        counter++;
        vector<Entity*> temp;
        for (Entity* e : entities) {
            temp.push_back(e);
        }
        for (Entity* e : temp) {
            try {
                (*e).tick();
                if (!e->exists) {
                    if (dynamic_cast<Player*>(e)) {
                        resetmap();
                        break;
                    }
                    entities.erase(std::find(entities.begin(), entities.end(), e));
                    delete e;
                }
            }
            catch (...) {}
        }
        if (keys.at('R')) {
            resetmap();
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
    Iohandler tio(&data, PLATFORM_NAME);
    data.mx = &tio.mx;
    data.my = &tio.my;
    data.leftmouse = &tio.leftmouse;
    io = &tio;
    while (running) {
        tio.windowtick();
        keys['W'] = sf::Keyboard::isKeyPressed(sf::Keyboard::W);
        keys['A'] = sf::Keyboard::isKeyPressed(sf::Keyboard::A);
        keys['S'] = sf::Keyboard::isKeyPressed(sf::Keyboard::S);
        keys['D'] = sf::Keyboard::isKeyPressed(sf::Keyboard::D);
        keys['R'] = sf::Keyboard::isKeyPressed(sf::Keyboard::R);
        waiting = false;
    }
}

void Mainclass::tick() {
    thread maintick(&Mainclass::gameloop, this);
    iohandle();
}