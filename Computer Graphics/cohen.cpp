#include <graphics.h>

const int INSIDE = 0; // 0000
const int LEFT = 1;   // 0001
const int RIGHT = 2;  // 0010
const int BOTTOM = 4; // 0100
const int TOP = 8;    // 1000

const int xMin = 50;
const int yMin = 50;
const int xMax = 200;
const int yMax = 200;

int computeCode(double x, double y) {
    int code = INSIDE;

    if (x < xMin) {
        code |= LEFT;
    } else if (x > xMax) {
        code |= RIGHT;
    }

    if (y < yMin) {
        code |= BOTTOM;
    } else if (y > yMax) {
        code |= TOP;
    }

    return code;
}

void cohenSutherlandClip(double x1, double y1, double x2, double y2) {
    int code1 = computeCode(x1, y1);
    int code2 = computeCode(x2, y2);
    bool accept = false;

    while (true) {
        if (!(code1 | code2)) {
            // Both endpoints are inside the window
            accept = true;
            break;
        } else if (code1 & code2) {
            // Both endpoints are outside the window, and in the same region
            break;
        } else {
            // Clipping needed; choose the endpoint outside the window
            int codeOut = code1 ? code1 : code2;

            double x, y;

            if (codeOut & TOP) {
                x = x1 + (x2 - x1) * (yMax - y1) / (y2 - y1);
                y = yMax;
            } else if (codeOut & BOTTOM) {
                x = x1 + (x2 - x1) * (yMin - y1) / (y2 - y1);
                y = yMin;
            } else if (codeOut & RIGHT) {
                y = y1 + (y2 - y1) * (xMax - x1) / (x2 - x1);
                x = xMax;
            } else if (codeOut & LEFT) {
                y = y1 + (y2 - y1) * (xMin - x1) / (x2 - x1);
                x = xMin;
            }

            if (codeOut == code1) {
                x1 = x;
                y1 = y;
                code1 = computeCode(x1, y1);
            } else {
                x2 = x;
                y2 = y;
                code2 = computeCode(x2, y2);
            }
        }
    }

    if (accept) {
        line(x1, y1, x2, y2);
    }
}

int main() {
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");

    // Draw the window
    rectangle(xMin, yMin, xMax, yMax);

    // Line endpoints
    double x1 = 30, y1 = 40, x2 = 300, y2 = 300;

    // Draw the original line
    line(x1, y1, x2, y2);

    // Perform Cohen-Sutherland line clipping
    cohenSutherlandClip(x1, y1, x2, y2);

    getch();
    closegraph();
    return 0;
}
