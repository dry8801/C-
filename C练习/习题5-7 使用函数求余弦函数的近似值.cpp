#include <stdio.h>
#include <math.h>

double funcos(double e, double x);

int main()
{
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
double funcos(double e, double x) {
    unsigned int n=0,i, j = 1;
    double sum = 0,temp, Factorial_sum=1;
    for (i = 0; i < n; i++) Factorial_sum = ((double)i + 1) * Factorial_sum;
    while (fabs(temp = ((pow(x, n)) / Factorial_sum)) > e) {
        if (j % 2)sum += temp;
        else sum -= temp;
        j++;
        n += 2;
        Factorial_sum = 1;
        for (i = 0; i < n; i++) Factorial_sum = ((double)i + 1) * Factorial_sum;
    }
    if (j % 2)sum += temp;
    else sum -= temp;
    return sum;
}
