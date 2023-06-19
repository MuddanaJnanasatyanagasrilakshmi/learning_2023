#include <stdio.h>
int main()
{
    int decimal = 32; // Predefined decimal number
    int binary[32];
    int binaryIndex = 0;
    int octal[100];
    int octalIndex = 0;
    char hexadecimal[100];
    int hexIndex = 0;

    int tempDecimal = decimal;

    while (tempDecimal > 0)
    {
        binary[binaryIndex] = tempDecimal % 2;
        tempDecimal = tempDecimal / 2;
        binaryIndex++;
    }
    tempDecimal = decimal;
    while (tempDecimal > 0)
    {
        octal[octalIndex] = tempDecimal % 8;
        tempDecimal = tempDecimal / 8;
        octalIndex++;
    }

    tempDecimal = decimal;

    while (tempDecimal > 0)
    {
        int remainder = tempDecimal % 16;
        if (remainder < 10)
        {
            hexadecimal[hexIndex] = remainder + '0';
        }
        else
        {
            hexadecimal[hexIndex] = remainder - 10 + 'A';
        }
        tempDecimal = tempDecimal / 16;
        hexIndex++;
    }

    printf("Binary: ");
    for(int i = binaryIndex - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
    printf("\n");

    printf("Octal: ");
    for (int i = octalIndex - 1; i >= 0; i--)
    {
        printf("%d", octal[i]);
    }
    printf("\n");

    printf("Hexadecimal: ");
    for (int i = hexIndex - 1; i >= 0; i--)
    {
        printf("%c", hexadecimal[i]);
    }
    printf("\n");

    return 0;
}

