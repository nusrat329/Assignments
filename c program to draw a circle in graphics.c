#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    circle(getmaxx()/2, getmaxy()/2, 100);

    getch();
    closegraph();

    return 0;
}
