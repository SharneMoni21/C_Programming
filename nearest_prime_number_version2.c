#include<stdio.h>
#include<math.h>

int checkPrime(int n);

int main()
{
    int num;
    int flag;
    int right_prime;
    int left_prime;
    int left,right;
    scanf("%d", &num);
    //Lets check whether the number itself is a prime number
    flag = checkPrime(num);
    if(flag == 1)
    {
        printf("%d", num);
    }
    else
    {
        for(int i=num; i<=num+10; ++i)
        {
            flag = checkPrime(i);
            if(flag == 1)
            {
                right_prime = i;
                break;
            }
        }
        for(int j=num; j>=num-10; --j)
        {
            flag = checkPrime(j);
            if(flag == 1)
            {
                left_prime = j;
                break;
            }
        }
        left = num-left_prime;
        right = right_prime-num;
        if(right>left)
        {
            printf("The nearest prime number is %d", left_prime);
        }
        else
        {
            printf("The nearest prime number is %d", right_prime);
        }
    }
    return 0;
}

int checkPrime(int n)
{
    int limit = sqrt(n);
    int factor;
    if(n%2==0 && n!= 2)
    {
        return 0;
    }
    else if(n%6==1 || n%6==5 || n==2 || n==3)
    {
        for(factor = 3; factor<=limit; factor=factor+2)
        {
            if(n%factor==0)
            {
                return 0;
            }
        }
        if(factor>limit)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}