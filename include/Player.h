#ifndef CPPTESTING_PLAYER_H
#define CPPTESTING_PLAYER_H

#include "Mainclass.h"
#include "Entity.h"
#include "Global.h"

class Mainclass;
class Entity;

class Player: public Entity {

public:

    Player(Global* in, double x, double y);

    void tick();

};


#endif //CPPTESTING_PLAYER_H
