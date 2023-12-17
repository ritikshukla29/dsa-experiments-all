#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, greatest = 0, smallest, a, b, temp;
    int arr[10] = {10, 82, 43, 46, 23, 45, 56, 24, 12, 14};

    a = arr[5];
    b = arr[7];

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[i] > arr[j] && arr[i] > greatest)
            {
                greatest = arr[i];
            }
            else if (arr[j] > arr[i] && arr[j] > greatest)
            {
                greatest = arr[j];
            }
        }
    }

    smallest = greatest;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[i] < arr[j] && arr[i] < smallest)
            {
                smallest = arr[i];
            }
            else if (arr[j] < arr[i] && arr[j] < smallest)
            {
                smallest = arr[j];
            }
        }
    }

    temp = arr[4];
    arr[4] = arr[6];
    arr[6] = temp;

    printf("\narr[5]=%d\narr[7]=%d\n\n", a, b);
    printf("Greatest number of array is : %d\nSmallest number of array is : %d\n", greatest, smallest);

    printf("New array is : [");
    for (i = 0; i < 9; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("%d]\n\n", arr[9]);
    return 0;
}
