#include <stdio.h>
#pragma warning(disable:4996)
int sum(int m, int n);

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    printf("sum = %d\n", sum(m, n));

    return 0;
}
/* ��Ĵ��뽫��Ƕ������ */
int sum(int m, int n) {
    int sum=0;
    for (; m <= n; m++) sum = sum + m;
    return sum;
}