#include <graphics.h>

// Function to draw a square
void drawSquare(int x, int y, int side) {
    rectangle(x, y, x + side, y + side);
}

// Function to perform 2D translation
void translate(int &x, int &y, int dx, int dy) {
    x = x + dx;
    y = y + dy;
}

int main() {
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");

    // Initial position of the square
    int x = 100, y = 100;
    int side = 50;

    // Draw the original square
    drawSquare(x, y, side);

    // Translation vector
    int dx = 50, dy = 30;

    // Perform translation
    translate(x, y, dx, dy);

    // Draw the translated square
    setcolor(RED);
    drawSquare(x, y, side);

    getch();
    closegraph();
    return 0;
}
