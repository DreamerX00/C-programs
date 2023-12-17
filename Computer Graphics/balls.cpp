#include <graphics.h>

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;
const int BALL_RADIUS = 50;

struct Ball {
    int x;
    int y;
    int radius;
    int speedX;
    int speedY;
    int color;
};

void drawBall(const Ball& ball) {
    // Draw the ball
    setfillstyle(SOLID_FILL, ball.color);
    setcolor(ball.color);
    circle(ball.x, ball.y, ball.radius);
    floodfill(ball.x, ball.y, ball.color);
}

void moveBall(Ball& ball) {
    // Move the ball
    ball.x += ball.speedX;
    ball.y += ball.speedY;

    // Bounce off the walls
    if (ball.x - ball.radius < 0 || ball.x + ball.radius > SCREEN_WIDTH) {
        ball.speedX = -ball.speedX;
    }

    if (ball.y - ball.radius < 0 || ball.y + ball.radius > SCREEN_HEIGHT) {
        ball.speedY = -ball.speedY;
    }
}

int main() {
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");

    Ball ball;
    ball.x = SCREEN_WIDTH / 2;
    ball.y = SCREEN_HEIGHT / 2;
    ball.radius = BALL_RADIUS;
    ball.speedX = 10;
    ball.speedY = 20;
    ball.color = RED;

    while (!kbhit()) {
        cleardevice();

        drawBall(ball);
        moveBall(ball);

        delay(50);  // Introduce a delay to control the animation speed
    }
    Ball ball2;
    ball2.x = SCREEN_WIDTH / 4;
    ball2.y = SCREEN_HEIGHT / 5;
    ball2.radius = BALL_RADIUS;
    ball2.speedX = 10;
    ball2.speedY = 20;
    ball2.color = RED;

    while (!kbhit()) {
        cleardevice();

        drawBall(ball2);
        moveBall(ball2);

        delay(20);  // Introduce a delay to control the animation speed
    }

    closegraph();
    return 0;
}
