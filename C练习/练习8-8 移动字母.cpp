#include <stdio.h>
#include <string.h>

#define MAXS 10

void Shift(char s[]);

void GetString(char s[]); /* 实现细节在此不表 */

int main()
{
    char s[MAXS];
    scanf("%s", s);
    Shift(s);
    printf("%s\n", s);
    return 0;
}

/* 你的代码将被嵌在这里 */
void GetString(char s[]) {

}
/*void Shift(char s[]) {
    char temp[3];
    int n;
    n = strlen(s);
    temp[0] = s[n - 3];
    temp[1] = s[n - 2];
    temp[2] = s[n - 1];
    s[n - 3] = s[0];
    s[n - 2] = s[1];
    s[n - 1] = s[2];
    s[0] = temp[0];
    s[1] = temp[1];
    s[2] = temp[2];
}*/
void Shift(char s[]) {
    char c;
    int i, j, n = strlen(s);
    //printf("%d\n", n);
    for (j = 0; j < n-3; j++) {
        c = s[n - 1];
        for (i = 0; i < n - 1; i++) {
            s[n - 1 - i] = s[n - 2 - i];
        }
        s[0] = c;
    }
}

