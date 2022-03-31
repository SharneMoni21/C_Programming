#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    int arr[t];
    int res[t];
    for(int i=0; i<t; ++i)
    {
        scanf("%d", &arr[i]);
        if(arr[i] % 10 == 0)
        {
            res[i] = arr[i] / 10;
        }
        else
        {
            res[i] = (arr[i] / 10) + 1;
        }
    }
    for(int i=0; i<t; ++i)
    {
        printf("%d\n", res[i]);
    }
    return 0;
}