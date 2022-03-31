//Basic Program to understand the calloc() Function (Clear Allocation)

/*Calloc() Function:
          This allocated multiple blocks of dynamic memory
          The values stored by default are zero in those memory locations*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int sum=0;
    int *ptr;
    ptr = (int*)calloc(10, sizeof(int)); //10 blocks of memory is created of the size of int
    //Lets us calculate the arithmetic sum of first 10 elements
    for(int i=1; i<=10; ++i)
    {
        *(ptr + i) = i;
        sum = sum + *(ptr + i);
    }
    printf("The sum of first 10 natural numbers is %d", sum);
    return 0;
}