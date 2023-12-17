#include <graphics.h>
#include <cmath>

// Function to draw a square
void drawSquare(int x, int y, int side) {
    rectangle(x, y, x + side, y + side);
}

// Function to perform 2D rotation
void rotate(int &x, int &y, double theta, int cx, int cy) {
    // Translate the point to the origin
    x = x - cx;
    y = y - cy;

    // Perform rotation
    double x_prime = x * cos(theta) - y * sin(theta);
    double y_prime = x * sin(theta) + y * cos(theta);

    // Translate the point back to its original position
    x = round(x_prime) + cx;
    y = round(y_prime) + cy;
}

int main() {
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");

    // Initial position of the square
    int x = 100, y = 100;
    int side = 50;

    // Draw the original square
    drawSquare(x, y, side);

    // Rotation parameters
    double theta = 45.0 * (3.14159265358979323846 / 180.0);  // 45 degrees in radians
    int cx = x + side / 2;  // Center of rotation x-coordinate
    int cy = y + side / 2;  // Center of rotation y-coordinate

    // Perform rotation
    rotate(x, y, theta, cx, cy);

    // Draw the rotated square
    setcolor(RED);
    drawSquare(x, y, side);

    getch();
    closegraph();
    return 0;
}
