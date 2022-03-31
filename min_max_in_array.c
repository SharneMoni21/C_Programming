//C program to print the maximum and minimum of an array

#include<stdio.h>

int maxFunction(int arr[], int size);
int minFunction(int arr[], int size);

int main()
{
    int length;
    printf("Enter the size of the array: \n");
    scanf("%d", &length);
    int arr[length];
    printf("Enter the elements of the array: \n");
    for(int i=0; i<length; ++i)
    {
        scanf("%d", &arr[i]);
    }
    int maximum;
    int minimum;
    maximum = maxFunction(arr, length);
    printf("Maximum Value: %d\n", maximum);
    minimum = minFunction(arr, length);
    printf("Minimum Value: %d", minimum);
    return 0;
}

int maxFunction(int arr[], int size)
{
    int max=0;
    for(int i=0; i<size; ++i)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int minFunction(int arr[], int size)
{
    int min=arr[0];
    for(int i=1; i<size; ++i)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}