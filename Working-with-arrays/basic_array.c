#include <stdio.h>

int main()
{
    // Declare an array of n integers
    int dec;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &dec);
    
    int arr[dec];

    // Read and print elements of an array

    for (int i = 0; i < dec; i++)
    {
        printf("Enter the value of element %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < dec; i++)
    {
        printf("The value of element %d is %d \n", i, arr[i]);
    }

}