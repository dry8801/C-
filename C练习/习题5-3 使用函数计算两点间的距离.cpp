#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>

double dist(double x1, double y1, double x2, double y2);

int main()
{
    double x1, y1, x2, y2;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    printf("dist = %.2f\n", dist(x1, y1, x2, y2));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
double dist(double x1, double y1, double x2, double y2) {
    double x = fabs(x1 - x2), y = fabs(y1 - y2);
    return sqrt(x * x + y * y);
}