#include <graphics.h>
#include <cmath>

// DDA Algorithm for Line Drawing
void drawLineDDA(int x1, int y1, int x2, int y2, int color) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
    float xIncrement = dx / (float) steps;
    float yIncrement = dy / (float) steps;
    float x = x1, y = y1;

    setcolor(color);

    for (int i = 0; i <= steps; i++) {
        putpixel(round(x), round(y), color);
        x += xIncrement;
        y += yIncrement;
    }
}

// Bresenham's Algorithm for Line Drawing
void drawLineBresenham(int x1, int y1, int x2, int y2, int color) {
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int twoDy = 2 * dy;
    int twoDx = 2 * dx;
    int p, x, y;

    setcolor(color);

    if (dx >= dy) {
        if (x1 > x2) {
            x = x2;
            y = y2;
            x2 = x1;
        } else {
            x = x1;
            y = y1;
        }

        putpixel(x, y, color);
        p = twoDy - dx;

        for (int i = 0; i < dx; i++) {
            x++;
            if (p < 0) {
                p += twoDy;
            } else {
                y++;
                p += twoDy - twoDx;
            }
            putpixel(x, y, color);
        }
    } else {
        if (y1 > y2) {
            x = x2;
            y = y2;
            y2 = y1;
        } else {
            x = x1;
            y = y1;
        }

        putpixel(x, y, color);
        p = twoDx - dy;

        for (int i = 0; i < dy; i++) {
            y++;
            if (p < 0) {
                p += twoDx;
            } else {
                x++;
                p += twoDx - twoDy;
            }
            putpixel(x, y, color);
        }
    }
}

int main() {
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");

    // Drawing a line using DDA Algorithm (color: RED)
    drawLineDDA(50, 50, 200, 150, RED);

    // Drawing a line using Bresenham's Algorithm (color: CYAN)
    drawLineBresenham(50, 200, 200, 350, CYAN);

    getch();
    closegraph();
    return 0;
}
