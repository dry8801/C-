#include <stdio.h>

int fib(int n);
void PrintFN(int m, int n);

int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}
/* 你的代码将被嵌在这里 */
int fib(int n) {
    int a[2000],i;
    if (n == 1 || n == 2) return 1;
    a[0] = 1;
    a[1] = 1;
    for (i = 2; i < n; i++) a[i] = a[i - 1] + a[i - 2];
    return a[n - 1];
    //1 1 2 3 5 
}
void PrintFN(int m, int n) {
    int i, count=0, fib_number;
    for (i = 0; i < 2000; i++) {
        fib_number = fib(i);
        if ( (fib_number >= m) && (fib_number <= n)) {
            count++;
            if (count != 1)printf(" ");
            printf("%d", fib_number);
        }
        else if (fib_number > n)break;
    }
    if (!count) printf("No Fibonacci number");
}
