#include "../include/Dragon.h"

Dragon::Dragon(Global* main, double x, double y): Entity(main, x, y) {
    sheetLocation.left = 1100;
    sheetLocation.top = 96;
    sheetLocation.width = 88;
    sheetLocation.height = 90;
    animationcount = 0;
    hitbox.w = 60;
    hitbox.h = 20;
    direction = 1;
    vx = 0;
    vy = 0;
    frames.push_back({{1100, 96, 16, 10}, -26.0f, -7.0f, -10.0f, 1});
    frames.push_back({{1100, 106, 7, 2}, -29.7f, -3.2f, -12.0f, 1});
    frames.push_back({{1120, 100, 10, 5}, -14.5f, -3.0f, 25.0f, 1});
    frames.push_back({{1132, 100, 26, 12}, 0.0f, 0.0f, 0.0f, 1});
    frames.push_back({{1136, 114, 4, 6}, -5.5f, 7.5f, -10.0f, 1});
    frames.push_back({{1136, 122, 4, 6}, -6.0f, 11.0f, 10.0f, 1});
    frames.push_back({{1132, 129, 8, 3}, -9.0f, 13.5f, 10.0f, 1});
    frames.push_back({{1148, 114, 4, 6}, 2.0f, 7.0f, -10.0f, 1});
    frames.push_back({{1148, 122, 4, 6}, 2.5f, 11.5f, 10.0f, 1});
    frames.push_back({{1144, 129, 8, 3}, -1.0f, 13.5f, 10.0f, 1});
    frames.push_back({{1160, 100, 10, 5}, 17.0f, -2.0f, 0.0f, 1});
    frames.push_back({{1172, 100, 8, 4}, 24.0f, -2.0f, -5.0f, 1});
    frames.push_back({{1184, 100, 4, 2}, 29.0f, -3.0f, -12.0f, 1});
    frames.push_back({{1100, 134, 24, 56}, 3.0f, -3.0f, 0.0f, 1});
    for (int i = 0; i < frames.size(); i++) {
        sframe rp = frames.at(i);
        defaultX[i] = rp.x;
        defaultY[i] = rp.y;
        defaultAngles[i] = rp.r;
    }
}

vector<Entity::sframe> Dragon::currentFrame() {
    return frames;
}

bool Dragon::playerInRange() {
    double dx = main->player->hitbox.x+main->player->hitbox.w/2-hitbox.x-hitbox.w/2;
    double dy = main->player->hitbox.y+main->player->hitbox.h/2-hitbox.y-hitbox.h/2;
    double distance = sqrt(dx*dx+dy*dy);
    return distance < 128;
}

void Dragon::tick() {
    counter++;
    animationcount+=1.2f+abs(vx)/5.0f;
    auto wing_ani = [](int count) {
        if (count % 10 >= 5) {
            return count % 5;
        }
        else return 5 - (count % 5);
    };
    frames.at(13).frame.left = 1100+24*wing_ani((int)((animationcount+7)/4));
    vx += (float)direction*-0.8f;
    vx *= 0.9;
    if (hitbox.x < 64) {
        direction = -1;
    }
    else if (hitbox.x > main->MAP_WIDTH*16-64) {
        direction = 1;
    }
    float amplifier = 1.3f;
    frames.at(0).x = defaultX[0];
    frames.at(0).y = defaultY[0];
    for (int i = 0; i < 14; i++) {
        frames.at(i).direction = direction;
        if (i < 13) {
            if (i <= 3) {
                frames.at(i).r = defaultAngles[i] + amplifier * 3 * sin(animationcount / (2.0f * 3.1415926f)) + 3;
                frames.at(i).y = defaultY[i] - amplifier * (3.0f - i) / 2.0f * sin(animationcount / (2.0f * 3.1415926f)) - 1;
            } else if (i >= 4) {
                frames.at(i).r = defaultAngles[i] + amplifier * 10 * sin(animationcount / (2.0f * 3.1415926f));
            }
            if (i == 1) {
                frames.at(i).y -= (amplifier * sin(animationcount / (2.0f * 3.1415926f)) - 1) * 0.5f;
            }
            if (i == 11) {
                frames.at(i).y = defaultY[i] + amplifier * 2 * sin(animationcount / (2.0f * 3.1415926f));
            } else if (i == 12) {
                frames.at(i).y = defaultY[i] + amplifier * 3 * sin(animationcount / (2.0f * 3.1415926f));
            }
        }
    }
    frames.at(1).x = defaultX[1];
    if (playerInRange()) {
        frames.at(1).r -= 30.0f;
        frames.at(1).x = defaultX[1]+1.5f;
        frames.at(1).y += 1.0f;
        float angle = 0;
        float px = main->player->hitbox.x+main->player->hitbox.w/2;
        float py = main->player->hitbox.y+main->player->hitbox.h/2;
        float dx = hitbox.x+hitbox.w/2;
        float dy = hitbox.y+hitbox.h/2;
        if ((px > dx && direction == -1) || (px < dx && direction == 1)) {
            if (px >= dx && py < dy && direction == -1) {
                angle = 315.0f / 180.0f * 3.1415926f;
            }
            if (px >= dx && py >= dy && direction == -1) {
                angle = 45.0f / 180.0f * 3.1415926f;
            }
            if (px < dx && py < dy && direction == 1) {
                angle = 225.0f / 180.0f * 3.1415926f;
            }
            if (px < dx && py >= dy && direction == 1) {
                angle = 135.0f / 180.0f * 3.1415926f;
            }
            if (py >= dy) {
                frames.at(0).r = -45.0f;
                frames.at(0).x += 2;
                frames.at(0).y += 1;
                frames.at(1).r += -45.0f;
                frames.at(1).y += 2;
                frames.at(1).x += 7;
            }
            else {
                frames.at(0).r = 45.0f;
                frames.at(1).r += 45.0f;
                frames.at(1).y -= 2;
                frames.at(1).x -= 3;
            }
            for (int i = 0; i < 20; i++) {
                std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
                auto duration = now.time_since_epoch();
                long time = std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();
                std::default_random_engine generator(time+i);
                std::normal_distribution<double> distribution(0,1.0);
                float ran = distribution(generator)*0.08f;
                main->entities->push_back(new FireBreath(main, hitbox.x+(0.5*hitbox.w)*(1-direction)-4*direction, hitbox.y+5, (13.0f) * cos(angle+ran), (13.0f) * sin(angle+ran)));
            }
        }
    }
    if (!moveH(vx, main->map, main->MAP_WIDTH, main->MAP_HEIGHT) && vx/(float)direction < 0) {
        direction *= -1;
    }
    moveV(vy, main->map, main->MAP_WIDTH, main->MAP_HEIGHT);
    if (hitbox.overlap(&main->player->hitbox) && dynamic_cast<Player*>(main->player)->damageTimer == 0) {
        if (main->player->hitbox.y+main->player->hitbox.h*1/2 < hitbox.y && main->player->vy > 0) {
            remove();
            for (int i = 0; i < 700; i++) {
                main->entities->push_back(new BloodParticle(main, hitbox.x+hitbox.w/2, hitbox.y+hitbox.h/2, i));
            }
            if (main->keys->at('W')) main->player->vy *= -1.1;
            else main->player->vy *= -0.8;
        }
        else {
            dynamic_cast<Player *>(main->player)->health--;
            dynamic_cast<Player *>(main->player)->damageTimer = 30;
        }
    }
}