#include<stdio.h>

int main()
{
    int testcases;
    int min;
    scanf("%d", &testcases);
    int a[testcases], b[testcases], c[testcases];
    int result[testcases];
    for(int i=0; i<testcases; ++i)
    {
        scanf("%d %d %d", &a[i], &b[i], &c[i]);
        if(a[i] < b[i] && a[i] < c[i])
        {
            result[i] = 0;
        }
        else if(b[i] < c[i] && b[i] < a[i])
        {
            result[i] = 1;
        }
        else
        {
            result[i] = 2;
        }
    }
    for(int i=0; i<testcases; ++i)
    {
        if(result[i] == 0)
        {
            printf("Draw\n");
        }
        else if(result[i] == 1)
        {
            printf("Bob\n");
        }
        else
        {
            printf("Alice\n");
        }
    }
    return 0;
}