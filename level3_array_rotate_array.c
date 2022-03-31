//C program to rotate an array clockwise or counter clock wise

#include<stdio.h>

int clockwise(int arr[], int length, int rotations);
int counterclock(int arr[], int length, int rotations);


int main()
{
    int size;
    int option;
    int clock;
    int counter;
    int noOfRotations;
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; ++i)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &noOfRotations, &option);
    if(option == 1)
    {
        //clock = option; value of clock becomes 1
        clockwise(arr, size, noOfRotations);
    }
    if(option == 2)
    {
        counterclock(arr, size, noOfRotations);
    }
    
    return 0;
}

int clockwise(int arr[], int length, int rotations)
{
    int newarr[rotations];
    int temp;
    int sizeofsplitArray;
    int sizeOfNewArray;
    int totalsize;
    for(int i=0; i<rotations; ++i)
    {
        newarr[i] = arr[length - 1 - i];
    }
    sizeOfNewArray = sizeof(newarr) / sizeof(newarr[0]);
    sizeofsplitArray = length - sizeOfNewArray;
    totalsize = sizeOfNewArray + sizeofsplitArray;
    int splitArray[sizeofsplitArray];
    int finalArray[totalsize];
    //printf("size: %d", sizeofsplitArray);
    for(int i=0; i<sizeOfNewArray/2; ++i) //For sorting the array
    {
        temp = newarr[i];
        newarr[i] = newarr[sizeOfNewArray - 1 - i];
        newarr[sizeOfNewArray - 1 - i] = temp;
    }
    for(int i=0; i<sizeOfNewArray; ++i)
    {
        finalArray[i] = newarr[i];
    }
    for(int i=0; i<sizeofsplitArray; ++i)
    {
        splitArray[i] = arr[i];
    }
    int x=sizeOfNewArray; //x = 2
    for(int i=0; i<sizeofsplitArray; ++i)
    {
        finalArray[x] = splitArray[i];
        ++x;
    }
    for(int i=0; i<totalsize; ++i)
    {
        printf("%d ", finalArray[i]);
    }
}

int counterclock(int arr[], int length, int rotations)
{
    int newarr[rotations];
    int temp;
    int sizeofsplitArray;
    int sizeOfNewArray;
    int totalsize;
    for(int i=0; i<rotations; ++i)
    {
        newarr[i] = arr[i];
    }
    sizeOfNewArray = sizeof(newarr) / sizeof(newarr[0]);
    sizeofsplitArray = length - sizeOfNewArray;
    totalsize = sizeOfNewArray + sizeofsplitArray;
    int splitArray[sizeofsplitArray];
    int finalArray[totalsize];
    for(int i=0; i<sizeofsplitArray; ++i)
    {
        splitArray[i] = arr[sizeOfNewArray+i];
    }
    for(int i=0; i<sizeofsplitArray; ++i)
    {
        finalArray[i] = splitArray[i];
    }
    int x=sizeofsplitArray; //x=3
    for(int i=0; i<sizeOfNewArray; ++i)
    {
        finalArray[x] = newarr[i];
        ++x;
    }
    for(int i=0; i<totalsize; ++i)
    {
        printf("%d ",finalArray[i]);
    }



}