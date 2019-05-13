#include <stdio.h>

int Count = 0;

int main(void)
{
    // ALG 1
    printf("================= ALGORITMO 1\n");
    for (int n = 1; n < 17; n ++ )
    {
    Count = 0;
    int r = TA(n);
    printf("N:%d R:%d C:%d\n", n, r, Count);
    
    }

    printf("================= ALGORITMO 2\n");
    for (int n = 1; n < 17; n++)
    {
        Count = 0;
        int r = TB(n);
        printf("N:%d R:%d C:%d\n", n, r, Count);
    }

    printf("================= ALGORITMO 3\n");
    for (int n = 1; n < 17; n++)
    {
        Count = 0;
        int r = TC(n);
        printf("N:%d R:%d C:%d\n", n, r, Count);
    }
}

int TA(int n)
{
    Count++;
    if (n == 1) return 1;
    else if (n > 1) return (TA(n/2) + n);
    return -1;
}

int TB(int n)
{
    Count++;
    if (n == 1) return 1;
    else if (n > 1) return (TB((n+1)/2)+ TB(n/2)+n);
}

int TC(int n)
{
    Count++;
    if (n == 1) return 1;
    else if (n%2 == 0) return (TC((n+1)/2) * 2 + n);
    else return (TC((n+1)/2) + TC(n/2) + n);
}
