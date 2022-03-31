#include<stdio.h>
#include<math.h>

int primeChecker(int num);

int main()
{
    int position;
    int flag;
    int count = 0;
    scanf("%d", &position);
    int array_size = position * 10;
    int arr[array_size];
    for(int i=2; i<=array_size; ++i)
    {
       flag = primeChecker(i); 
       if(flag == 1)
       {
           arr[count] = i;
           ++count;
       }
    }
    //printf("%d", arr[4]);
    printf("The %d prime number is %d", position, arr[position-1]);
    return 0;

}

int primeChecker(int num)
{
    if(num<2) return 0;
    
    if(num ==2 || num == 3) return 1;

    if(num % 2 == 0 || num % 3 == 0) return 0;

    int limit;
    limit = sqrt(num);
    for(int factor = 5; factor <= limit; factor = factor + 6)
    {
        if(num % factor == 0 || num % (factor+2) == 0) return 0;
    }
    return 1;
}