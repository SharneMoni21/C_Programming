//C Program to print the armstrong numbers in a given range

#include<stdio.h>
#include<math.h>

int numberOfDigits(int n);
int checkWhetherArmstrong(int x, int freq);

int main()
{
    int n1,n2;
    int count;
    int armstrong;
    scanf("%d %d", &n1,&n2);
    for(int i=n1; i<=n2; ++i)
    {
        if(i>=2 && i<=9)
        {
            continue;
        }
        count = numberOfDigits(i);
        armstrong = checkWhetherArmstrong(i, count); 
        if(armstrong == 1)
        {
            printf("%d ",i);
        }
    }
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