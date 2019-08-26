#ifndef MAINCLASS_H
#define MAINCLASS_H

#include "Iohandler.h"
#include "Player.h"
#include "Entity.h"
#include "Global.h"

using namespace std;
using namespace std::chrono;

class Mainclass {

public:

    int counter;

    int cx;
    int cy;

    bool running;

    bool waiting = true;

    vector<vector<int>> map;

    list<Entity*> entities;

    std::map<char, bool> keys;

    Global data;

    static const int MAX_TPS = 30;

    Mainclass();

    void gameloop();

    void tick();

    void iohandle();

    static long getmillis();

};

#endif
