#ifndef MAINCLASS_H
#define MAINCLASS_H

#include <iostream>
#include <chrono>
#include <thread>
#include "iohandler.h"

class mainclass {

public:

    static const int MAX_TPS = 30;

    int counter;

    bool running;

    mainclass();

    void gameloop();

    void tick();

    static long getmillis();

};

#endif
