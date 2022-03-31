//C program to calculate the lcm of two integers

#include<stdio.h>

int main()
{
    int num1, num2;
    int max;
    printf("Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);
    max= (num1>num2) ? num1 : num2;
    while(1)
    {
        if(max%num1==0 && max%num2==0)
        {
            printf("The LCM of the numbers %d and %d is : %d", num1, num2, max);
            break;
        }
        ++max;
    }
    return 0;
}