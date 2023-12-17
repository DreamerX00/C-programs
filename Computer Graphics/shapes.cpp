#include <graphics.h>
#include <iostream>

int main() {
    // Initialize the graphics system
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw a circle
    circle(200, 200, 50);

    // Draw a rectangle
    rectangle(300, 150, 400, 250);

    // Draw a polygon
    int poly[] = {500, 150, 550, 100, 600, 150, 550, 200, 500, 150};
    drawpoly(5, poly);

    // Wait for a key press
    std::cout << "Press Enter to exit...";
    getchar();

    // Close the graphics system
    closegraph();

    return 0;
}
