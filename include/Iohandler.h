#ifndef IOHANDLER_H
#define IOHANDLER_H

#include "Global.h"
#include "Player.h"

using namespace std;
using namespace sf;

class Player;

class Iohandler {

public:

    Global* main;

    Texture spritesheet;

    RenderWindow window;

    View view;

    int counter;

    int mx;
    int my;

    bool isWaiting;

    explicit Iohandler(Global* in);

    void windowtick();

    void drawFromSheet(IntRect sheetrect, int x, int y, double w = 1, double h = 1, int t = 255);

    void drawAddress(const string& address, int x, int y, double w = 1, double h = 1);

};


#endif //CPPTESTING_IOHANDLER_H
