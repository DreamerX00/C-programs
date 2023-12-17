#include <graphics.h>

int main() {
    // Initialize the graphics system
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");

    // Draw a circle
    circle(250, 250, 50);

    // Draw a rectangle
    rectangle(100, 100, 300, 200);

    // Display text
    outtextxy(150, 300, "Graphics Programming in C++");

    // Set the drawing color to red
    setcolor(RED);

    // Draw a line
    line(50, 50, 400, 400);

    // Set the background color for text to blue
    setbkcolor(BLUE);

    // Draw a filled rectangle
    setcolor(GREEN);
    bar(350, 150, 450, 250);

    // Wait for a key press
    int key = getch();

    // Close the graphics system
    closegraph();

    return 0;
}
