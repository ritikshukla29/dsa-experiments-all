#include <stdio.h>
#define INT_MAX 2147483647
int main(int argc, char const *argv[])
{
    int i, j, greatest = 0, smallest = INT_MAX, gtid, ltid;
    int arr[10] = {10, 82, 43, 46, 23, 45, 56, 24, 12, 14};

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[i] > arr[j] && arr[i] > greatest)
            {
                greatest = arr[i];
                gtid = i;
            }
            else if (arr[j] > arr[i] && arr[j] > greatest)
            {
                greatest = arr[j];
                gtid = j;
            }
            if (arr[i] < arr[j] && arr[i] < smallest)
            {
                smallest = arr[i];
                ltid = i;
            }
            else if (arr[j] < arr[i] && arr[j] < smallest)
            {
                smallest = arr[j];
                ltid = j;
            }
        }
    }

    printf("\nGreatest number from array is at index [%d] and is : %d\nSmallest number from array is at index [%d] and is : %d\n\n", gtid, greatest, ltid, smallest);
    return 0;
}
