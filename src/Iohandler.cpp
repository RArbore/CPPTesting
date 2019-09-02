#include "../include/Iohandler.h"

Iohandler::Iohandler(Global* in):
        window(VideoMode(VideoMode::getDesktopMode().width, VideoMode::getDesktopMode().height,32),"Game"),
        view(FloatRect(0.f, 0.f, window.getSize().x, window.getSize().y))
{
    mx = 0;
    my = 0;
    isWaiting = false;
    main = in;
    spritesheet.loadFromFile("resources/sheet.png");
    spritesheet.setSmooth(false);
    view.zoom(1.0f);
    window.setView(view);
    counter = 0;
}

void Iohandler::windowtick() {
    if (*main->map_done) {
        isWaiting = false;
        counter++;
        Event event{};
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
                exit(EXIT_SUCCESS);
            }
        }
        window.clear();
        int wsx = (int)(window.getSize().x)/2;
        int wsy = (int)(window.getSize().y)/2;
        int cx = *main->cx;
        int cy = *main->cy;
        Vector2i pixelPos = sf::Mouse::getPosition(window);
        Vector2f worldPos = window.mapPixelToCoords(pixelPos);
        mx = worldPos.x-wsx+cx;
        my = worldPos.y-wsy+cy;
        double scale = window.getSize().y/512.0;
        for (int i = 0; i < 4; i++) {
            for (int wx = -4; wx < main->MAP_WIDTH*16/512+4; wx++) {
                drawFromSheet(IntRect(i*512, 512, 512, 512), -cx*(i+1)/10+(wx*512*scale), 0, scale, scale);
            }
        }
        for (int x = 0; x < main->MAP_WIDTH; x++) {
            for (int y = 0; y < main->MAP_HEIGHT; y++) {
                if (main->map->at(x).at(y) == 1) {
                    drawFromSheet(IntRect(16, 64, 16, 16), x * 16 + wsx - cx, y * 16 + wsy - cy);
                }
            }
        }
        for (Entity* e : *main->entities) {
            try {
                IntRect frame = e->currentFrame();
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
        window.display();
    }
    else {
        isWaiting = true;
    }
}

void Iohandler::drawFromSheet(IntRect sheetrect, int x, int y, double w, double h, int t) {
    Sprite sprite;
    sprite.setTexture(spritesheet);
    sprite.setTextureRect(IntRect(sheetrect));
    sprite.setPosition(Vector2f(x, y));
    sprite.setScale(Vector2f(w, h));
    sprite.setColor(sf::Color(255, 255, 255, t));
    window.draw(sprite);
}

void Iohandler::drawAddress(const string& address, int x, int y, double w, double h) {
    Texture texture;
    texture.loadFromFile(address);
    texture.setSmooth(false);
    Sprite sprite;
    sprite.setTexture(texture);
    sprite.setPosition(Vector2f(x, y));
    sprite.setScale(Vector2f(w, h));
    window.draw(sprite);
}