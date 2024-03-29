#ifndef MAINCLASS_H
#define MAINCLASS_H

#include "Iohandler.h"
#include "Player.h"
#include "DustCloud.h"
#include "CrackedBlock.h"
#include "MiniTroll.h"
#include "ChestMonster.h"
#include "Coin.h"
#include "Dragon.h"
#include "Entity.h"
#include "Global.h"
#include "ResourceManager/ResourceHandle.h"

using namespace std;
using namespace std::chrono;

class Mainclass {

public:

    int counter;

    int cx;
    int cy;

    bool running;
    bool map_done;

    bool waiting = true;

    Iohandler* io;

    vector<vector<int>> map;

    vector<Entity*> entities;

    std::map<char, bool> keys;

    Entity* currentTick;

    Global data;

    static const int MAX_TPS = 30;

    Mainclass();

    void genmap();

    void resetmap();

    void gameloop();

    void tick();

    void iohandle();

    static long getmillis();

};

#endif

#if defined(_WIN32)
#define PLATFORM_NAME "windows" // Windows
#elif defined(_WIN64)
#define PLATFORM_NAME "windows" // Windows
#elif defined(__CYGWIN__) && !defined(_WIN32)
#define PLATFORM_NAME "windows" // Windows (Cygwin POSIX under Microsoft Window)
#elif defined(__ANDROID__)
#define PLATFORM_NAME "android" // Android (implies Linux, so it must come first)
#elif defined(__linux__)
#define PLATFORM_NAME "linux" // Debian, Ubuntu, Gentoo, Fedora, openSUSE, RedHat, Centos and other
#elif defined(__unix__) || !defined(__APPLE__) && defined(__MACH__)
#include <sys/param.h>
    #if defined(BSD)
        #define PLATFORM_NAME "bsd" // FreeBSD, NetBSD, OpenBSD, DragonFly BSD
    #endif
#elif defined(__hpux)
#define PLATFORM_NAME "hp-ux" // HP-UX
#elif defined(_AIX)
#define PLATFORM_NAME "aix" // IBM AIX
#elif defined(__APPLE__) && defined(__MACH__) // Apple OSX and iOS (Darwin)
#include <TargetConditionals.h>
#if TARGET_IPHONE_SIMULATOR == 1
#define PLATFORM_NAME "ios" // Apple iOS
#elif TARGET_OS_IPHONE == 1
#define PLATFORM_NAME "ios" // Apple iOS
#elif TARGET_OS_MAC == 1
#define PLATFORM_NAME "osx" // Apple OSX
#endif
#elif defined(__sun) && defined(__SVR4)
#define PLATFORM_NAME "solaris" // Oracle Solaris, Open Indiana
#else
    #define PLATFORM_NAME NULL
#endif

#ifdef defined//(_WIN32) || defined(_WIN64)
#include <direct.h>
// MSDN recommends against using getcwd & chdir names
#define cwd _getcwd
#define cd _chdir
#else
#include <unistd.h>
#define cwd getcwd
#define cd chdir
#endif
