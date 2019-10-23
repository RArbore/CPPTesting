#include "../include/Iohandler.h"

Iohandler::Iohandler(Global* in, const string& PLATFORM_NAME):
        window(VideoMode(VideoMode::getDesktopMode().width, VideoMode::getDesktopMode().height,32),"Game"),
        gameView(FloatRect(0.f, 0.f, window.getSize().x, window.getSize().y)),
        overlayView(FloatRect(0.f, 0.f, window.getSize().x, window.getSize().y)),
        backgroundView(FloatRect(0.f, 0.f, window.getSize().x, window.getSize().y))
{
    mx = 0;
    my = 0;
    leftmouse = false;
    isWaiting = false;
    main = in;
    ResourceHandle sheet("resources/sheet.png");
    char const *image = sheet.string().c_str();
    spritesheet.loadFromMemory(image, 210420);
    spritesheet.setSmooth(false);
    zoom = 0.5f;
    gameView.zoom(zoom);
    counter = 0;
    isDrawing = false;

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
        Vector2i pixelPos = Mouse::getPosition(window);
        Vector2f worldPos = window.mapPixelToCoords(pixelPos);
        mx = worldPos.x-wsx+cx;
        my = worldPos.y-wsy+cy;
        leftmouse = Mouse::isButtonPressed(Mouse::Left);
        double factor = (1.0f/2.0f)-(1.0f/(2.0f*zoom));
        double scale = window.getSize().y/512.0;
        window.setView(backgroundView);
        for (int i = 0; i < 4; i++) {
            for (int wx = -4; wx < main->MAP_WIDTH*16/512+4; wx++) {
                drawFromSheet(IntRect(i*512, 512, 512, 512), -cx*(i+1)/(10*zoom)+(wx*512*scale), 0, scale, scale);
            }
        }
        window.setView(gameView);
        isDrawing = true;
        srand(1);
        for (int x = 0; x < main->MAP_WIDTH; x++) {
            for (int y = 0; y < main->MAP_HEIGHT; y++) {
                if (main->map->at(x).at(y) == 1) {
                    drawFromSheet(getGrassSprite(x, y), x * 16 + wsx - cx, y * 16 + wsy - cy);
                }
            }
        }
        vector<Entity*> temp;
        for (Entity* e : *main->entities) {
            temp.push_back(e);
        }
        for (Entity* e : temp) {
            try {
                while (e==*main->currentTick) {}
                vector<Entity::sframe> frames = e->currentFrame();
                for (Entity::sframe rp : frames) {
                    IntRect frame = rp.frame;
                    int xd = e->hitbox.x + e->hitbox.w / 2 - abs(frame.width) / 2 + rp.x;
                    int yd = e->hitbox.y + e->hitbox.h / 2 - abs(frame.height) / 2 + rp.y;
                    if (rp.direction == 1) {
                        drawFromSheet(frame, xd + wsx - cx, yd + wsy - cy, 1, 1, e->transparency, rp.r);
                    }
                    else {
                        float arx = rp.x+e->hitbox.w/2;
                        float ary = rp.y+e->hitbox.h/2;
                        drawFromSheet(frame, xd + (e->hitbox.w-2*arx+frame.width) + wsx - cx, yd + wsy - cy, -1, 1, e->transparency, rp.r, true);
                    }
                }
            }
            catch (...) {}
        }
        isDrawing = false;
        window.setView(overlayView);
        int toDrawHealth = (int)(dynamic_cast<Player*>(main->player)->health);
        int heartScale = 3;
        int heartSpacing = 15;
        for (int i = 0; i < (int)(dynamic_cast<Player*>(main->player)->maxHealth/2); i++) {
            if (toDrawHealth >= 2) {
                drawFromSheet({288, 256, 16, 16}, ((heartSpacing+heartScale*16)*(i)+heartSpacing), heartSpacing, heartScale, heartScale);
            }
            else if (toDrawHealth == 1) {
                drawFromSheet({288+16, 256, 16, 16}, ((heartSpacing+heartScale*16)*(i)+heartSpacing), heartSpacing, heartScale, heartScale);
            }
            else {
                drawFromSheet({288+32, 256, 16, 16}, ((heartSpacing+heartScale*16)*(i)+heartSpacing), heartSpacing, heartScale, heartScale);
            }
            toDrawHealth -= 2;
        }
        window.display();
    }
    else {
        isWaiting = true;
    }
}

void Iohandler::drawFromSheet(IntRect sheetrect, int x, int y, double w, double h, int t, float angle, bool flipped) {
    if (flipped) angle *= -1;
    Sprite sprite;
    sprite.setTexture(spritesheet);
    sprite.setTextureRect(IntRect(sheetrect));
    Transform transform;
    if (flipped) {
        transform.rotate(angle, {-(float)(sheetrect.width/2)+x, (float)(sheetrect.height/2)+y});
        transform.translate(x, y);
        transform.scale(w, h);
    }
    else {
        transform.rotate(angle, {(float)(sheetrect.width/2)+x, (float)(sheetrect.height/2)+y});
        transform.translate(x, y);
        transform.scale(w, h);
    }
    sprite.setColor(sf::Color(255, 255, 255, t));
    window.draw(sprite, transform);
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

void Iohandler::setZoom(float new_zoom) {
    gameView.setSize(window.getSize().x, window.getSize().y);
    gameView.zoom(new_zoom);
}

IntRect Iohandler::getGrassSprite(int x, int y) {
    int surroundings[3][3];
    for (int ix = 0; ix < 3; ix++) {
        for (int iy = 0; iy < 3; iy++) {
            surroundings[ix][iy] = 1-main->map->at(min(max(x-1+ix, 0), main->MAP_WIDTH-1)).at(min(max(y-1+iy, 0), main->MAP_HEIGHT-1));
        }
    }
    int adjacentEncoding = surroundings[1][0]+2*surroundings[2][1]+4*surroundings[1][2]+8*surroundings[0][1];
    IntRect frame(1176+adjacentEncoding*16, 8+16*(rand()%2), 16, 16);
    if (adjacentEncoding == 0) {
        int diagonalEncoding = surroundings[0][0]+2*surroundings[2][0]+4*surroundings[2][2]+8*surroundings[0][2];
        if (diagonalEncoding == 0) {
            return frame;
        }
        frame = IntRect(1176+diagonalEncoding*16, 56, 16, 16);
    }
    return frame;
}