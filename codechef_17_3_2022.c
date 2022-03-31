#include<stdio.h>
#include<stdlib.h>

int main()
{
    short int t;
    scanf("%hu", &t);
    int a[t], b[t], c[t], d[t];
    int res[t];
    for(int i=0; i<t; ++i){
        scanf("%d %d %d %d", &a[i], &b[i], &c[i], &d[i]);
        if(a[i]+c[i] == 180 && b[i]+d[i] == 180)
        {
            res[i] = 1;
        }
        else
        {
            res[i] = 0;
        }
    }
    for(int i=0; i<t; ++i)
    {
        if(res[i] == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}