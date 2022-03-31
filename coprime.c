//C program to find whether two numbers is coprime or not

#include<stdio.h>
#include<conio.h>

int hcfChecker(int n1, int n2);

int main()
{
    int num1, num2;
    printf("Enter any two numbers: ");
    scanf("%d %d", &num1, &num2);
    int hcf;
    hcf = hcfChecker(num1, num2);
    if(hcf == 1)
    {
        printf("The entered two numbers are co-prime");
    }
    else
    {
        printf("The numbers are not co-prime");
    }
    return 0;
}

int hcfChecker(int n1, int n2)
{
    int h;
    for(int i=1; i<n1; ++i)
    {
        if(n1%i==0 && n2%i==0)
        {
            h = i;
        }
    }
    return h;
}