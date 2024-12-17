 #include "wallpaper_setter.h"

bool WallpaperSetter::endWith(const std::string& str, const std::string& suffix) {
    if (str.length() < suffix.length()) return false;
    return str.compare(str.length() - suffix.length(), suffix.length(), suffix) == 0; 
}

std::string WallpaperSetter::getWallpapersDirectory() {
    const char* user = std::getenv("USER");
    return (user) ? std::string("/home/") + user + "/wallpapers" : "";
}

 std::vector<std::string> WallpaperSetter::getWallpapers() {
    return this->images;
 }

 void WallpaperSetter::searchWallpapers() {
    std::string wallpapersDirectory = getWallpapersDirectory();
    for (const auto& entry : fs::directory_iterator(wallpapersDirectory)) {
        if (entry.is_regular_file()) {
            std::string archive = entry.path().string();
             if (endWith(archive, ".jpg")|| endWith(archive, ".png") || endWith(archive, ".jpeg")) {
                this->images.push_back(archive);
            }
        }
    }
 }

 void WallpaperSetter::setWallpaper(const std::string& imagePath) {
    std::string command = "feh --bg-scale " + imagePath;
    system("feh --bg-fill /home/liux/wallpapers/nuxy/black.jpg");
    system("sleep 0.01");
    system("feh --bg-fill /home/liux/wallpapers/nuxy/dark-gray.jpg");
    system("sleep 0.01");
    system(command.c_str());
 }