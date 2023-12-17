#include <graphics.h>

// Midpoint Circle Algorithm
void drawMidpointCircle(int x_center, int y_center, int radius, int color) {
    int x = radius;
    int y = 0;
    int P = 1 - radius;

    while (x > y) {
        putpixel(x_center + x, y_center - y, color);
        putpixel(x_center - x, y_center - y, color);
        putpixel(x_center + x, y_center + y, color);
        putpixel(x_center - x, y_center + y, color);
        putpixel(x_center + y, y_center - x, color);
        putpixel(x_center - y, y_center - x, color);
        putpixel(x_center + y, y_center + x, color);
        putpixel(x_center - y, y_center + x, color);

        y++;

        if (P <= 0)
            P = P + 2*y + 1;
        else {
            x--;
            P = P + 2*y - 2*x + 1;
        }
    }
}

// Bresenham's Circle Drawing Algorithm
void drawBresenhamCircle(int x_center, int y_center, int radius, int color) {
    int x = 0;
    int y = radius;
    int d = 3 - 2 * radius;

    while (x <= y) {
        putpixel(x_center + x, y_center - y, color);
        putpixel(x_center - x, y_center - y, color);
        putpixel(x_center + x, y_center + y, color);
        putpixel(x_center - x, y_center + y, color);
        putpixel(x_center + y, y_center - x, color);
        putpixel(x_center - y, y_center - x, color);
        putpixel(x_center + y, y_center + x, color);
        putpixel(x_center - y, y_center + x, color);

        x++;

        if (d > 0) {
            y--;
            d = d + 4 * (x - y) + 10;
        } else
            d = d + 4 * x + 6;
    }
}

int main() {
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");

    // Draw a circle using Midpoint Circle Algorithm (color: RED)
    drawMidpointCircle(150, 150, 50, RED);

    // Draw a circle using Bresenham's Circle Drawing Algorithm (color: GREEN)
    drawBresenhamCircle(300, 150, 50, GREEN);

    getch();
    closegraph();
    return 0;
}
