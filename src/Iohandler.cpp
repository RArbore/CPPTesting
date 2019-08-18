#include "../include/Iohandler.h"

Iohandler::Iohandler(Mainclass *in):
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
    drawAddress("resources/portrait.png", 0, 0);
    drawFromSheet(IntRect(128+16*(((int)(main->counter/10))%9), 44, 16, 20), 200, 0, 4, 4);
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
