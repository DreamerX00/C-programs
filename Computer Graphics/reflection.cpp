#include <graphics.h>
#include <math.h>

// Function to draw a square
void drawSquare(int x, int y, int side, int color) {
    setcolor(color);
    rectangle(x, y, x + side, y + side);
}

// Function to perform 2D reflection over the x-axis
void reflectOverXAxis(int &y) {
    y = -y;
}

// Function to perform 2D reflection over the y-axis
void reflectOverYAxis(int &x) {
    x = -x;
}

int main() {
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");

    // Initial position and size of the square
    int x = 80, y = 20-100;
    int side = 300;

    // Draw the original square
    drawSquare(x, y, side, WHITE);

    // Perform reflection over the x-axis
    reflectOverXAxis(y);
    // Draw the reflected square over the x-axis
    drawSquare(x, y, side, RED);

    // Reset position
    reflectOverXAxis(y); // Reflect back to original position

    // Perform reflection over the y-axis
    reflectOverYAxis(x);
    // Draw the reflected square over the y-axis
    drawSquare(x, y, side, GREEN);

    getch();
    closegraph();
    return 0;
}
