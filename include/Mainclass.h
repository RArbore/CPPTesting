#ifndef MAINCLASS_H
#define MAINCLASS_H

#include "Iohandler.h"
#include "Player.h"
#include "Entity.h"

using namespace std;
using namespace std::chrono;

class Mainclass {

public:

    static const int MAX_TPS = 30;

    int counter;

    bool running;

    list<Entity*> entities;

    Mainclass();

    void gameloop();

    void tick();

    static long getmillis();

};

#endif
