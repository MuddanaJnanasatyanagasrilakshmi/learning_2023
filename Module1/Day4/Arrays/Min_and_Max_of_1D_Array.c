#include <stdio.h>
int main()
{
    int arr[] = {5, 2, 9, 1, 7};  // Predefined array
    int len = sizeof(arr) / sizeof(arr[0]);
    int i, min, max;

    min = arr[0];
    max = arr[0];

    for (i = 1; i < len; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}

