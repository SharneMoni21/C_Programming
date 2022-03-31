//In this program we find the HCF of two numbers

#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2;
    int hcf;
    printf("Enter the two numebers: ");
    scanf("%d %d", &num1, &num2);
    //Finding HCF
    for(int i=1; i<=num1; ++i)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf = i;
        }
    }
    printf("%d", hcf);
    return 0;
}