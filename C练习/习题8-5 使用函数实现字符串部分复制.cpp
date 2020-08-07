#include <stdio.h>
#define MAXN 20

void strmcpy(char* t, int m, char* s);
void ReadString(char s[]); /* 由裁判实现，略去不表 */

int main()
{
    char t[MAXN]="happy new year", s[MAXN];
    int m;
    scanf("%d", &m);
    strmcpy(t, m, s);
    printf("\n%s\n", s);
    printf("\n%s\n", t);
    return 0;
}
void ReadString(char s[]) {

}
void strmcpy(char* t, int m, char* s) {
    int n = 0, i = 0;
    while (t[n] != '\0') n++;
    //printf("\n%d\n", n);
    if (m > n) {
        t[0] = '\0';
        return;
    }
    for (m = m - 1; m < n; m++) s[i++] = t[m];
    s[i] = '\0';
}
