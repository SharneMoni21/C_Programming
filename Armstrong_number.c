//C program to calculate whether a number is Armstong number of not

#include<stdio.h>
#include<math.h>

int numberOfDigits(int n);
int checkWhetherArmstrong(int x, int freq);

int main()
{
    int num;
    int count;
    int armstrong;
    printf("Enter a number: ");
    scanf("%d",&num);
    count = numberOfDigits(num);
    armstrong = checkWhetherArmstrong(num, count);
    if(armstrong == 1)
    {
        printf("Armstrong");
    }
    else
    {
        printf("not");
    }
    return 0;
}

int numberOfDigits(int n)
{
    int times=0;
    int temp = n;
    while(temp)
    {
        ++times;
        temp /= 10;
    }
    return times;
}

int checkWhetherArmstrong(int x, int freq)
{
    int digit;
    int sum=0;
    int temp;
    temp = x;
    while(temp)
    {
        digit = temp%10;
        sum = sum + ((int)pow(digit, freq));
        temp = temp/10;
    }
    //printf("%d",sum);
    if(sum == x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}