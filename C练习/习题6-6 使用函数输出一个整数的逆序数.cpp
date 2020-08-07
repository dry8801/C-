#include <stdio.h>

int reverse(int number);

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int reverse(int number) {
    int sign, sum;
    if (number >= 0) sign = 1;
    else {
        sign = 0;
        number = -number;
    }
    sum = number % 10;
    number /= 10;
    while (number) {
        sum = number % 10 + sum*10;
        number /= 10;
    }
    if (!sign) sum = -sum;
    return sum;
}
