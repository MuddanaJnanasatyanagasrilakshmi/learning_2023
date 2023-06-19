#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};  // Predefined array
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, sumEven = 0, sumOdd = 0;

    for (i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sumEven += arr[i];
        }
        else
        {
            sumOdd += arr[i];
        }
    }
    int difference = sumEven - sumOdd;
    printf("Sum of even elements: %d\n", sumEven);
    printf("Sum of odd elements: %d\n", sumOdd);
    printf("Difference between even and odd elements: %d\n", difference);
    return 0;
}
