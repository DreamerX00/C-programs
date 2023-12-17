#include <graphics.h>
#include <stdlib.h>
#include <time.h>

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;
const int NUM_BALLOONS = 10;

struct Balloon {
    int x;
    int y;
    int radius;
    int speed;
    int color;
};

void drawBalloon(const Balloon& balloon) {
    // Draw balloon body
    setfillstyle(SOLID_FILL, balloon.color);
    setcolor(balloon.color);
    circle(balloon.x, balloon.y, balloon.radius);
    floodfill(balloon.x, balloon.y, balloon.color);

    // Draw balloon string
    line(balloon.x, balloon.y + balloon.radius, balloon.x, balloon.y + balloon.radius + 50);
}

void moveBalloon(Balloon& balloon) {
    // Move the balloon upward
    balloon.y -= balloon.speed;

    // If the balloon goes above the screen, reset its position to the bottom
    if (balloon.y + balloon.radius + 50 < 0) {
        balloon.y = SCREEN_HEIGHT + balloon.radius;
    }
}

void generateRandomBalloons(Balloon balloons[]) {
    for (int i = 0; i < NUM_BALLOONS; ++i) {
        balloons[i].x = rand() % SCREEN_WIDTH;
        balloons[i].y = rand() % SCREEN_HEIGHT;
        balloons[i].radius = rand() % 100 + 20;  // Radius between 20 and 40
        balloons[i].speed = rand() % 5 + 1;     // Speed between 1 and 5
        balloons[i].color = rand() % 15 + 1;    // Color between 1 and 15
    }
}

int main() {
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");

    srand(static_cast<unsigned>(time(nullptr)));

    Balloon balloons[NUM_BALLOONS];
    generateRandomBalloons(balloons);

    while (!kbhit()) {
        cleardevice();

        for (int i = 0; i < NUM_BALLOONS; ++i) {
            drawBalloon(balloons[i]);
            moveBalloon(balloons[i]);
        }

        delay(50);  // Introduce a delay to control the animation speed
    }

    closegraph();
    return 0;
}
