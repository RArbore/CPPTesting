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

    bool running;

    list<Entity*> entities;

    Global data;

    static const int MAX_TPS = 30;

    Mainclass();

    void gameloop();

    void tick();

    static long getmillis();

};

#endif
