#include<stdio.h>
#include<math.h>

int isPrime(int n)
{
    if(n%2==0 && n!=2) return 0;
    if(n == 2 && n == 3) return 1;
    if(n < 0 || n == 0 || n == 1) return 0;
    int till;
    till = sqrt(n);
    int check_factor;
    for(check_factor = 3; check_factor <= till; check_factor = check_factor + 2)
    {
        if(n%check_factor == 0) return 0;
    }
    return 1;
}

int main()
{
    int num;
    int cf;
    scanf("%d", &num);
    int flag;
    flag = isPrime(num);
    if(flag == 1) printf("Prime factor : %d\n", num);
    else
    {
        for(cf = 2; cf <=num; ++cf)
        {
            if(num%cf == 0)
            {
                printf("Prime factor: %d\n", cf);
                while(num % cf == 0)
                {
                    num = num/cf;
                }
                if(isPrime(num))
                {
                    printf("Prime Factor : %d\n", num);
                    break;
                }
            }
        }
    }
    return 0;
}