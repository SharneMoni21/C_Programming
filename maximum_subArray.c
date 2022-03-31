#include<stdio.h>

int maxSubArray(int arr[], int n)
{
    int max_so_far = 0;
    int max_ending_here = 0;
    int start=0;
    int end = 0;
    int s=0;
    for(int i=0; i<n; ++i)
    {
        max_ending_here = max_ending_here + arr[i];
        if(max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
            start = s;
            end = i;
        }
        if(max_ending_here<0)
        {
            max_ending_here = 0;
            s = i + 1;
        }
    }
    printf("The start index of the maximum array is: %d\n", start);
    printf("The ending index of the maximum array is %d\n", end);
    //lets print the maximum array
    for(int i=start; i<=end; ++i)
    {
        printf("%d ", arr[i]);
    }
    return max_so_far;

}

int main()
{
    int arr[] = {-2, -1, -3, -4, -1, -2, 1, 0, 2, -1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int maximum = maxSubArray(arr, size);
    printf("\nMaximum sum is %d", maximum);
    return 0;
}