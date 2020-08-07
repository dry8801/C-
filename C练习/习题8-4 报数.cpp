#include <stdio.h>
#define MAXN 20

void CountOff(int n, int m, int out[]);

int main()
{
    int out[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    CountOff(n, m, out);
    for (i = 0; i < n; i++)
        printf("%d ", out[i]);
    printf("\n");

    return 0;
}
/* 你的代码将被嵌在这里 */
void CountOff(int n, int m, int out[]) {
    int i=0,j=0,count=1,k;
    for (i = 0; i < n; i++) out[i] = -1;
    i = 1;
    while (count <= n)
    {
        if (count == n) {
            out[j] = count;
            return;
        }
        if (i == m) {
            out[j] = count++;
            i = 0;
        }
        i++;
        j++;
        if (j >= n) j = 0;
        while (out[j] > 0) {
            j++;
            if (j >= n) j = 0;
        }
    } 
}