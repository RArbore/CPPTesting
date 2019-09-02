#ifndef MAINCLASS_H
#define MAINCLASS_H

#include "Iohandler.h"
#include "Player.h"
#include "DustCloud.h"
#include "CrackedBlock.h"
#include "RainCloud.h"
#include "Coin.h"
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
    bool map_done;

    bool waiting = true;

    Iohandler* io;

    vector<vector<int>> map;

    vector<Entity*> entities;

    std::map<char, bool> keys;

    Global data;

    static const int MAX_TPS = 30;

    Mainclass();

    void genmap();

    void resetmap();

    void gameloop();

    void tick();

    void iohandle();

    static long getmillis();

};

#endif
