#ifndef IOHANDLER_H
#define IOHANDLER_H

#include "pch.h"
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

class mainclass;

class iohandler {

public:

    mainclass* main;

    Texture spritesheet;

    RenderWindow window;

    iohandler(mainclass *in);

    void windowtick();

    void drawFromSheet(IntRect sheetrect, int x, int y, int w = 1, int h = 1);

    void drawAddress(const string& address, int x, int y, int w = 1, int h = 1);

};


#endif //CPPTESTING_IOHANDLER_H
