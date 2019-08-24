#ifndef IOHANDLER_H
#define IOHANDLER_H

#include "Global.h"

using namespace std;
using namespace sf;

class Iohandler {

public:

    Global* main;

    Texture spritesheet;

    RenderWindow window;

    explicit Iohandler(Global* in);

    void windowtick();

    void drawFromSheet(IntRect sheetrect, int x, int y, int w = 1, int h = 1);

    void drawAddress(const string& address, int x, int y, int w = 1, int h = 1);

};


#endif //CPPTESTING_IOHANDLER_H
