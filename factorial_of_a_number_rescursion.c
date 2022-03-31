#include<stdio.h>

int factorial(int n);

int main()
{
    int inp;
    scanf("%d", &inp);
    int result = factorial(inp);
    printf("Result: %d", result);
    return 0;
}

int factorial(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}