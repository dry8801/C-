#pragma warning(disable:4996)
#include <stdio.h>

#define MAXN 10

int even(int n);
int OddSum(int List[], int N);

int main()
{
    int List[MAXN], N, i;

    scanf("%d", &N);
    printf("Sum of ( ");
    for (i = 0; i < N; i++) {
        scanf("%d", &List[i]);
        if (even(List[i]) == 0)
            printf("%d ", List[i]);
    }
    printf(") = %d\n", OddSum(List, N));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int even(int n) {
    return !(n % 2);
}
int OddSum(int List[], int N) {
    int sum = 0, i;
    for (i = 0; i < N; i++) if (even(List[i]) == 0) sum += List[i];
    return sum;
}