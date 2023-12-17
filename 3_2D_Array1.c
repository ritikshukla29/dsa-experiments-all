#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j;
    int arr[3][3] = {{11, 12, 13}, {14, 15, 16}, {17, 18, 19}};
    for (i = 0; i < 3; i++)
    {
        printf("[");
        for (j = 0; j < 3; j++)
        {
            printf(" %d ", arr[i][j]);
        }
        printf("]\n");
    }
    return 0;
}
