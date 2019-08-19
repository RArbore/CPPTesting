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
    for (Entity* e : *main->entities) {
        IntRect frame = e->currentFrame();
        int xd = e->hitbox->x+e->hitbox->w/2-frame.width/2;
        int yd = e->hitbox->y+e->hitbox->h/2-frame.height/2;
        drawFromSheet(frame, xd, yd);
    }
    window.display();
}

void Iohandler::drawFromSheet(IntRect sheetrect, int x, int y, int w, int h) {
    Sprite sprite;
    sprite.setTexture(spritesheet);
    sprite.setTextureRect(IntRect(sheetrect));
    sprite.setPosition(Vector2f(x, y));
    sprite.setScale(Vector2f(w, h));
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