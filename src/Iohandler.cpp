#include "../include/Iohandler.h"

Iohandler::Iohandler(Global* in):
        window(VideoMode(VideoMode::getDesktopMode().width, VideoMode::getDesktopMode().height,32),"Game")
{
    main = in;
    spritesheet.loadFromFile("resources/sheet.png");
    spritesheet.setSmooth(false);
}

void Iohandler::windowtick() {
    Event event{};
    while (window.pollEvent(event)) {
        if (event.type == Event::Closed) {
            window.close();
            exit(EXIT_SUCCESS);
        }
    }
    window.clear();
    int cx = *main->cx;
    int cy = *main->cy;
    int wsx = (int)(window.getSize().x)/2;
    int wsy = (int)(window.getSize().y)/2;
    if (*main->map_done) {
        for (int x = 0; x < main->MAP_WIDTH; x++) {
            for (int y = 0; y < main->MAP_HEIGHT; y++) {
                if (main->map->at(x).at(y) == 1) {
                    drawFromSheet(IntRect(16, 64, 16, 16), x * 16 + wsx - cx, y * 16 + wsy - cy);
                }
            }
        }
        for (Entity* e : *main->entities) {
            try {
                IntRect frame = e->currentFrame(e->counter);
                if (dynamic_cast<Player*>(e)) {
                    drawFromSheet(frame, wsx - abs(frame.width) / 2, wsy - abs(frame.height) / 2);
                } else {
                    int xd = e->hitbox.x + e->hitbox.w / 2 - abs(frame.width) / 2;
                    int yd = e->hitbox.y + e->hitbox.h / 2 - abs(frame.height) / 2;
                    drawFromSheet(frame, xd + wsx - cx, yd + wsy - cy, 1, 1, e->transparency);
                }
            }
            catch (...) {}
        }
    }
    window.display();
}

void Iohandler::drawFromSheet(IntRect sheetrect, int x, int y, int w, int h, int t) {
    Sprite sprite;
    sprite.setTexture(spritesheet);
    sprite.setTextureRect(IntRect(sheetrect));
    sprite.setPosition(Vector2f(x, y));
    sprite.setScale(Vector2f(w, h));
    sprite.setColor(sf::Color(255, 255, 255, t));
    window.draw(sprite);
}

void Iohandler::drawAddress(const string& address, int x, int y, int w, int h) {
    Texture texture;
    texture.loadFromFile(address);
    texture.setSmooth(false);
    Sprite sprite;
    sprite.setTexture(texture);
    sprite.setPosition(Vector2f(x, y));
    sprite.setScale(Vector2f(w, h));
    window.draw(sprite);
}