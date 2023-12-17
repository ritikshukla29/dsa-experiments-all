#include <stdio.h>

int main()
{
    // Declare an array of integers.
    int arr[] = {10, 20, 30, 40, 50};

    // Initialize the greatest number to the first element of the array.
    int greatest = arr[0];
    int smallest = arr[0];

    // Iterate over the array and compare each element with the greatest number.
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > greatest)
        {
            greatest = arr[i];
        }
    }

    // Print the greatest number.
    printf("The greatest number is %d.\n", greatest);

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    // Print the smallest number.
    printf("The smallest number is %d.\n", smallest);

    return 0;
}