#include<stdio.h>

int main()
{
    int inp;
    scanf("%d", &inp);
    int n1 = 0;
    int n2 = 1;
    int fibo[inp];
    fibo[0] = 0;
    fibo[1] = 1;
    int sum;
    for(int i=2; i<inp; ++i)
    {
        sum = n1 + n2;
        fibo[i] = sum;
        n1 = n2;
        n2 = sum;
    }
    for(int i=0; i<inp; ++i)
    {
        printf("%d ", fibo[i]);
    }
    return 0;
}