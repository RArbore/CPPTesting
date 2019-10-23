#ifndef IOHANDLER_H
#define IOHANDLER_H

#include "Global.h"
#include "Player.h"
#include "ResourceManager/ResourceHandle.h"

using namespace std;
using namespace sf;

class Player;

class Iohandler {

public:

    Global* main;

    Texture spritesheet;

    RenderWindow window;

    View backgroundView;
    View gameView;
    View overlayView;

    int counter;

    int mx;
    int my;

    float zoom;

    bool leftmouse;

    bool isWaiting;

    bool isDrawing;

    explicit Iohandler(Global* in, const string& PLATFORM_NAME);

    void windowtick();

    void drawFromSheet(IntRect sheetrect, int x, int y, double w = 1, double h = 1, int t = 255, float angle = 0.0f, bool flipped = false);

    void drawAddress(const string& address, int x, int y, double w = 1, double h = 1);

    void setZoom(float new_zoom);

    IntRect getGrassSprite(int x, int y);

};


#endif //CPPTESTING_IOHANDLER_H
