#include<stdio.h>

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    int odd[size];
    int even[size];
    int j=0;
    int k=0;
    int even_count = 0;
    int odd_count = 0;
    for(int i=0; i<size; ++i)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<size; ++i)
    {
        if(arr[i] % 2 == 0)
        {
            even[j] = arr[i];
            ++even_count;
            ++j;
        }
        else
        {
            odd[k] = arr[i];
            ++odd_count;
            ++k;
        }
    }
    // printf("Even count: %d\n", even_count);
    // printf("Odd count: %d", odd_count);
    printf("The even elements are : \n");
    for(int j=0; j<even_count; ++j)
    {
        printf("%d\n", even[j]);
    }
    printf("The odd elements are : \n");
    for(int k=0; k<odd_count; ++k)
    {
        printf("%d\n", odd[k]);
    }
    return 0;

}