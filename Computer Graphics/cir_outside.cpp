#include <graphics.h>
#include <cmath>
#include <time.h>

void drawRotatedCircle(int cx, int cy, int radius, float angle, int color) {
    // Calculate the new position of the center of the rotated circle
    int newX = cx + round(radius * cos(angle));
    int newY = cy + round(radius * sin(angle));

    // Draw the outer circle
    circle(cx, cy, radius);

    // Draw the rotated circle
    setcolor(color);
    circle(newX, newY, radius);
}

int main() {
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");

    // Set the center and radius of the outer circle
    int outerCx = 200, outerCy = 200, outerRadius = 100;

    // Set the rotation speed
    float rotationSpeed = 0.02;

    while (!kbhit()) {
        // Clear the screen
        cleardevice();

        // Get the current system time to create animation
        int currentTime = time(0);

        // Calculate the rotation angle based on system time
        float angle = currentTime * rotationSpeed;

        // Draw the rotated circle outside the outer circle
        drawRotatedCircle(outerCx, outerCy, outerRadius, angle, RED);

        delay(50); // Introduce a delay to control animation speed
    }

    closegraph();
    return 0;
}
