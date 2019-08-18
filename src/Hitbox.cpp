#include "../include/Hitbox.h"

Hitbox::Hitbox(double x, double y, double w, double h) {
    this->x = x;
    this->y = y;
    this->w = w;
    this->h = h;
}

bool Hitbox::overlap(double hx, double hy, double hw, double hh) {
    double x1 = x;
    double y1 = y;
    double x2 = x+w;
    double y2 = y+h;
    double x3 = hx;
    double y3 = hy;
    double x4 = hx+hw;
    double y4 = hy+hh;
    return !(x3 > x2 || x1 > x4 || y3 > y2 || y1 > y4);
}

bool Hitbox::overlap(Hitbox* hitbox) {
    this->overlap(hitbox->x, hitbox->y, hitbox->w, hitbox->h);
}