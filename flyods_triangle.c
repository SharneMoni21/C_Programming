//C program to print floyd's triangle

#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    int digits = 1;
    scanf("%d", &num);
    for(int i = 1; i<=num; ++i)
    {
        for(int j=1; j<=i; ++j)
        {
            printf("%2d ", digits++);
        }
        printf("\n");
    }
    return 0;
}