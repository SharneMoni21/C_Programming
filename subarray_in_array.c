//C program to print out all the possible subarrays in an array
//Possible Subarrays = n * (n+1)/2

//Version 1

/*
#include<stdio.h>

void subArray(int arr[], int n)
{
    for(int i=0; i<n; ++i)
    {
        for(int j=i; j<n; ++j)
        {
            for(int k=i; k<=j; ++k)
            {
                printf("%d", arr[k]);
            }
            printf("\n");
        }
    }
}

int main()
{
    int arr[] = {1,2,3,4};
    int size;
    size = sizeof(arr)/sizeof(arr[0]);
    subArray(arr, size);
    return 0;
}
*/

//Version 2

#include<stdio.h>

void subArray(int arr[], int n)
{
    for(int i=0; i<n; ++i)
    {
        for(int j=i; j<n; ++j)
        {
            for(int k=i; k<=j; ++k)
            {
                printf("%d", arr[k]);
            }
            printf("\n");
        }
    }
}

int main()
{
    int size;
    int max_subArray;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements: ");
    for(int i=0; i<size; ++i)
    {
        scanf("%d", &arr[i]);
    }
    max_subArray = size * (size+1)/2;
    printf("The possible subarrays for the entered arrays is : %d\n", max_subArray);
    printf("The possible subarrays are: \n");
    subArray(arr, size);
    return 0;
}