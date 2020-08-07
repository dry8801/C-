#include <stdio.h>

int narcissistic(int number);
void PrintN(int m, int n);

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    if (narcissistic(m)) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if (narcissistic(n)) printf("%d is a narcissistic number\n", n);
    return 0;
}

/* 你的代码将被嵌在这里 */
int narcissistic(int number) {
    int sum = 0, tmp;
    int number2 = number, number1 = number, n = 0, i;
    while (number1 != 0) {
        n++;
        number1 /= 10;
    }
    while (number2 != 0) {
        tmp = 1;
        for (i = 0; i < n; i++)tmp *= (number2 % 10);
        sum += tmp;
        number2 /= 10;
    }
    if (sum == number) return 1;
    else return 0;
}
void PrintN(int m, int n) {
    int i;
    for (i = m + 1; i < n; i++) if (narcissistic(i) == 1) printf("%d\n", i);
}