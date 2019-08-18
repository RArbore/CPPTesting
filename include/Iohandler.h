#ifndef IOHANDLER_H
#define IOHANDLER_H

#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

class Mainclass;

class Iohandler {

public:

    Mainclass* main;

    Texture spritesheet;

    RenderWindow window;

    Iohandler(Mainclass *in);

    void windowtick();

    void drawFromSheet(IntRect sheetrect, int x, int y, int w = 1, int h = 1);

    void drawAddress(const string& address, int x, int y, int w = 1, int h = 1);

};


#endif //CPPTESTING_IOHANDLER_H
