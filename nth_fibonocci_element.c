#include<stdio.h>
#include<math.h>

int pos_fibo(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
    else
    {
      return pos_fibo(n-1) + pos_fibo(n-2);
    }
}

int main()
{
    int num;
    scanf("%d", &num);

    int fibo = pos_fibo(num);

    printf("The %d fibonocci series is %d", num, fibo);
    return 0;
}