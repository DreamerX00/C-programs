#include <graphics.h>
#include <math.h>

// Function to draw a square
void drawSquare(int x, int y, int side, int color) {
    setcolor(color);
    rectangle(x, y, x + side, y + side);
}

// Function to perform horizontal shearing
void shearHorizontal(int &x, int &y, float Shx) {
    x = x + round(Shx * y);
}

// Function to perform vertical shearing
void shearVertical(int &x, int &y, float Shy) {
    y = y + round(Shy * x);
}

int main() {
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");

    // Initial position and size of the square
    int x = 50, y = 50;
    int side = 100;

    // Draw the original square
    drawSquare(x, y, side, WHITE);

    // Shearing factors
    float Shx = 0.2;  // Horizontal shearing factor
    float Shy = 0.2;  // Vertical shearing factor

    // Perform horizontal shearing
    shearHorizontal(x, y, Shx);
    // Draw the horizontally sheared square
    drawSquare(x, y, side, RED);

    // Reset position
    shearHorizontal(x, y, -Shx); // Undo the horizontal shearing

    // Perform vertical shearing
    shearVertical(x, y, Shy);
    // Draw the vertically sheared square
    drawSquare(x, y, side, GREEN);

    getch();
    closegraph();
    return 0;
}
