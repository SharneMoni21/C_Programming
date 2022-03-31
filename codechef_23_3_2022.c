#include<stdio.h>

int main()
{
    int testcases;
    int points_possible;
    int total_points;
    scanf("%d", &testcases);
    int x[testcases], y[testcases], z[testcases];
    int result[testcases];
    for(int i=0; i<testcases; ++i)
    {
        scanf("%d %d %d", &x[i], &y[i], &z[i]);
        points_possible = z[i] * 2;
        total_points = points_possible + x[i];
        if(total_points >= y[i])
        {
            result[i] = 1;
        }
        else
        {
            result[i] = 0;
        }
    }
    for(int i=0; i<testcases; ++i)
    {
        if(result[i] == 1)
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