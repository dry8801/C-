#include <stdio.h>

int factorsum(int number);
void PrintPN(int m, int n);

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if (factorsum(m) == m) printf("%d is a perfect number\n", m);
    if (factorsum(n) == n) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int factorsum(int number) {
    int n = number / 2, i, sum = 0;
    if (n < 1)n = 1;
    for (i = 1; i <= n; i++) {
        if (number % i == 0) sum += i;
    }
    return sum;
}
void PrintPN(int m, int n) {
    int i, j, n_2, sign = 0;
    for (i = m; i <= n; i++) {
        if (i == factorsum(i)) {
            if (i != m) printf("\n");
            printf("%d = ", i);
            n_2 = i / 2;
            if (n_2 < 1) n_2 = 1;
            for (j = 1; j <= n_2; j++) {
                if (i % j == 0) {
                    if (j != 1)printf("+ ");
                    printf("%d", j);
                    if (j != n_2) printf(" ");
                    
                }
            }
            sign = 1;
        }
    }
    if (!sign) printf("No perfect number");
}