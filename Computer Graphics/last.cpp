#include <graphics.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>

const int MAX_OBJECTS = 5;

struct Object {
    int x;
    int y;
    int speed;
    bool isActive;  // Indicates whether the object is currently active
};

void drawSpaceship(int x, int y) {
    // Draw spaceship body
    rectangle(x, y, x + 50, y + 20);

    // Draw spaceship wings
    line(x, y + 10, x + 50, y + 10);

    // Draw spaceship cockpit
    ellipse(x + 25, y + 10, 0, 360, 5, 5);
}

void drawProjectile(int x, int y) {
    // Draw projectile
    line(x, y, x, y - 10);
}

void drawBlast(int x, int y) {
    // Draw blast effect
    setcolor(YELLOW);
    circle(x, y, 10);
}

void initializeObjects(Object objects[]) {
    for (int i = 0; i < MAX_OBJECTS; ++i) {
        objects[i].x = rand() % (getmaxx() - 50);
        objects[i].y = rand() % (getmaxy() - 30);
        objects[i].speed = rand() % 5 + 1;  // Speed between 1 and 5
        objects[i].isActive = true;
    }
}

bool checkCollision(int x1, int y1, int x2, int y2, int size) {
    // Check collision between two objects based on their coordinates and size
    return (abs(x1 - x2) < size) && (abs(y1 - y2) < size);
}

int main() {
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");

    Object spaceships[MAX_OBJECTS];
    Object projectiles[MAX_OBJECTS];

    srand(static_cast<unsigned>(time(nullptr)));

    initializeObjects(spaceships);
    initializeObjects(projectiles);

    while (true) {
        cleardevice();

        // Draw spaceships
        for (int i = 0; i < MAX_OBJECTS; ++i) {
            if (spaceships[i].isActive) {
                drawSpaceship(spaceships[i].x, spaceships[i].y);

                // Move the spaceship to the right
                spaceships[i].x += spaceships[i].speed;

                // Reset spaceship position when it goes off the screen
                if (spaceships[i].x > getmaxx()) {
                    spaceships[i].x = -50;
                }
            }
        }

        // Draw projectiles and handle collisions
        for (int i = 0; i < MAX_OBJECTS; ++i) {
            if (projectiles[i].isActive) {
                drawProjectile(projectiles[i].x, projectiles[i].y);

                // Move the projectile upward
                projectiles[i].y -= projectiles[i].speed;

                // Check for collisions with spaceships
                for (int j = 0; j < MAX_OBJECTS; ++j) {
                    if (spaceships[j].isActive &&
                        checkCollision(projectiles[i].x, projectiles[i].y,
                                       spaceships[j].x, spaceships[j].y, 20)) {
                        // Collision detected, show blast effect and deactivate both objects
                        drawBlast(spaceships[j].x, spaceships[j].y);
                        spaceships[j].isActive = false;
                        projectiles[i].isActive = false;
                    }
                }

                // Reset projectile position when it goes off the screen
                if (projectiles[i].y < 0) {
                    projectiles[i].isActive = false;
                }
            }
        }

        delay(50);  // Introduce a delay to control the animation speed

        if (_kbhit()) {
            break;  // Break the loop if a key is pressed
        }
    }

    getch(); // Wait for a key press before closing the graphics window
    closegraph();
    return 0;
}
