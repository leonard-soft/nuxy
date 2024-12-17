#include "app.h"
#include "../wallpaper_setter/wallpaper_setter.h"

void App::run() {
    WallpaperSetter WallpaperSetter;
    
    std::cout << "init the app" << std::endl;   
    WallpaperSetter.searchWallpapers();

     while (true) {
        if (!WallpaperSetter.getWallpapers().empty()) {
            static size_t index = 0;
            WallpaperSetter.setWallpaper(WallpaperSetter.getWallpapers()[index]);
            index = (index + 1) % WallpaperSetter.getWallpapers().size();
        }
        std::this_thread::sleep_for(std::chrono::seconds(5 * 60));
    }  
}
