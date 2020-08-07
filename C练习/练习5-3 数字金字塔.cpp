#include <stdio.h>
#pragma warning(disable:4996)
void pyramid(int n);

int main()
{
    int n;

    scanf("%d", &n);
    pyramid(n);

    return 0;
}

/* 你的代码将被嵌在这里 */
void pyramid(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) printf(" ");
        for (j = 0; j < i; j++) printf("%d ", i);
        if (i != n) printf("\n");
    }
}