#include <stdio.h>
#define MAXN 10

int ArrayShift(int a[], int n, int m);

int main()
{
    int a[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    ArrayShift(a, n, m);

    for (i = 0; i < n; i++) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int ArrayShift(int a[], int n, int m) {
    int i, j, temp;
    for (j = 0; j < m; j++) {
        temp = a[n - 1];
        for (i = 0; i < n - 1; i++) a[n - 1 - i] = a[n - 2 - i];
        a[0] = temp;
    }
    return 0;
}