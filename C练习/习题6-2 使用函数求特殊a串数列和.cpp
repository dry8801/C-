#include <stdio.h>

int fn(int a, int n);
int SumA(int a, int n);

int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a, n));
    printf("s = %d\n", SumA(a, n));

    return 0;
}
/* ��Ĵ��뽫��Ƕ������ */
int fn(int a, int n) {
    int sum = a;
    while (--n) {
        sum = sum * 10 + a;
    }
    return sum;
}
int SumA(int a, int n) {
    int sum = 0;
    while (n--)
    {
        sum += fn(a, n + 1);
    }
    return sum;
}