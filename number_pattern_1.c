#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int row;
    for(row = 1; row<=num; ++row)
    {
        for(int space=1; space<=(num-row); ++space)
        {
            printf(" ");
        }
        for(int star=1; star<=row; ++star)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}