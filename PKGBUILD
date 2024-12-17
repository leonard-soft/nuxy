#maintainer: leonard-soft
pkgname=nuxy
pkgver=1.0.1
pkgrel=1
pkgdesc="a simple wallpaper manager"
arch=('x86_64')
url=https://github.com/leonard-soft/nuxy
license=('MIT')
depends=('feh' 'gcc')
makedepends=('feh' 'gcc')

original_dir="$PWD"
source=()
sha256sums=()

build() {
    cd "$srcdir" 
    g++ -o3 -o nuxy main.cpp app/App.cpp wallpaper_setter/WallpaperSetter.cpp
}

package() {
  
    install -Dm755 "$original_dir/nuxy" "$pkgdir/usr/bin/nuxy"

    install -Dm644 "$original_dir/LICENSE" "$pkgdir/usr/share/licenses/$pkgname/LICENSE"

    mkdir "/home/$USER/wallpapers"

    install -Dm775 "$original_dir/src/static/black.jpg" "$pkgdir/home/$USER/wallpapers/$pkgname/black.jpg"
    install -Dm775 "$original_dir/src/static/dark-gray.jpg" "$pkgdir/home/$USER/wallpapers/$pkgname/dark-gray.jpg"
    install -Dm775 "$original_dir/src/static/05.jpg" "$pkgdir/home/$USER/wallpapers/05.jpg"
    install -Dm775 "$original_dir/src/static/10.jpg" "$pkgdir/home/$USER/wallpapers/10.jpg"
    install -Dm775 "$original_dir/src/static/12.jpg" "$pkgdir/home/$USER/wallpapers/12.jpg"
    install -Dm775 "$original_dir/src/static/13.jpg" "$pkgdir/home/$USER/wallpapers/13.jpg"
    install -Dm775 "$original_dir/src/static/15.jpg" "$pkgdir/home/$USER/wallpapers/15.jpg"

    chmod 777 "$pkgdir/home/$USER/wallpapers"
}
