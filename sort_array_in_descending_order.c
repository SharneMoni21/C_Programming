#include<stdio.h>

int main()
{
    int size;
    printf("Enter the size of array we want to sort: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i=0; i<size; ++i)
    {
        scanf("%d", &arr[i]);
    }
    int temp;
    for(int i=0; i<size; ++i)
    {
        for(int j=i+1; j<size; ++j)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The array in descending order is: ");
    for(int i=0; i<size; ++i)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}