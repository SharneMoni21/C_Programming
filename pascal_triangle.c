//C program to print the pascals triangle

#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number of rows: ");
    scanf("%d", &num);
    int c;
    for(int i=0; i<num; ++i)
    {
        for(int space=1; space<num-i; ++space)
        {
            printf(" ");
        }
        for(int j=0; j<=i; ++j)
        {
            if(i==0 || j==0) 
            {
                c = 1;
            }    
            else 
            {
                c = (c * (i - j + 1))/j;
            }
            printf("%d ", c);
        }
        printf("\n");
    }
    return 0;
}