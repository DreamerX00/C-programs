#include <graphics.h>
#include <cmath>

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;
const int CHART_RADIUS = 150;

void drawPieChart(float incomePercentage, float expenditurePercentage) {
    int centerX = SCREEN_WIDTH / 2;
    int centerY = SCREEN_HEIGHT / 2;

    // Draw the pie chart outline
    setcolor(BLACK);
    circle(centerX, centerY, CHART_RADIUS);

    // Calculate angles for income and expenditure sectors
    float startAngle = 0;
    float endAngleIncome = startAngle + 360 * incomePercentage / 100;
    float endAngleExpenditure = endAngleIncome + 360 * expenditurePercentage / 100;

    // Draw income sector
    setfillstyle(SOLID_FILL, MAGENTA);
    pieslice(centerX, centerY, startAngle, endAngleIncome, CHART_RADIUS);
    startAngle = endAngleIncome;

    // Draw expenditure sector
    setfillstyle(SOLID_FILL, BLUE);
    pieslice(centerX, centerY, startAngle, endAngleExpenditure, CHART_RADIUS);
}

int main() {
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");

    // Family income and expenditure percentages (modify these values accordingly)
    float incomePercentage = 60.0;
    float expenditurePercentage = 40.0;

    drawPieChart(incomePercentage, expenditurePercentage);

    getch();
    closegraph();
    return 0;
}
