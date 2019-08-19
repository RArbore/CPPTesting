#ifndef CPPTESTING_HITBOX_H
#define CPPTESTING_HITBOX_H

class Hitbox {

public:

    double x;
    double y;
    double w;
    double h;

    Hitbox(double hx, double hy, double hw, double hh);

    bool overlap(double x, double y, double w, double h);

    bool overlap(Hitbox* hitbox);

};


#endif //CPPTESTING_HITBOX_H
