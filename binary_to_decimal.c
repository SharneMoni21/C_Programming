//C program to convert binary to decimal

#include<stdio.h>

int main()
{
    int binary;
    int rem;
    int decimal = 0;
    int weight = 1; //8421 Binary Code
    printf("Enter the binary number : ");
    scanf("%d", &binary);
    int store = binary;
    while(binary)
    {
        rem = binary % 10;
        decimal = decimal + rem*weight;
        binary = binary/10;
        weight = weight * 2;
    }
    printf("The decimal value of %d is %d", store, decimal);
    return 0;
}