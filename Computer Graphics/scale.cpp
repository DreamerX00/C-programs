#include <graphics.h>
#include <math.h>

// Function to draw a scaled square
void drawScaledSquare(int x, int y, int side, float Sx, float Sy) {
    int scaledSideX = round(side * Sx);
    int scaledSideY = round(side * Sy);
    rectangle(x, y, x + scaledSideX, y + scaledSideY);
}

// Function to perform 2D scaling
void scale(int &x, int &y, float Sx, float Sy) {
    x = round(x * Sx);
    y = round(y * Sy);
}

int main() {
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");

    // Initial position and size of the square
    int x = 100, y = 100;
    int side = 50;

    // Draw the original square
    drawScaledSquare(x, y, side, 1.0, 1.0);

    // Scaling factors
    float Sx = 1.5;  // Scale factor along the x-axis
    float Sy = 0.5;  // Scale factor along the y-axis

    // Perform scaling
    scale(x, y, Sx, Sy);

    // Draw the scaled square
    setcolor(RED);
    drawScaledSquare(x, y, side, Sx, Sy);

    getch();
    closegraph();
    return 0;
}
