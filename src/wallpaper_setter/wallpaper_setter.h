#define WALLPAPER_SETTER
#ifdef WALLPAPER_SETTER

#include <vector>
#include <iostream>
#include <filesystem>
#include <thread>
#include <stdlib.h>

namespace fs = std::filesystem;

class WallpaperSetter {
private:
    std::vector<std::string> images;
public:
    bool endWith(const std::string& str, const std::string& suffix); 
    std::string getWallpapersDirectory();
    std::vector<std::string> getWallpapers();

    void searchWallpapers(); 
    void setWallpaper(const std::string& imagePath);
};

#endif