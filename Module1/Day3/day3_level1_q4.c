#include <stdio.h>
#include<math.h>
int removingDigit(int num, int position)
{
   int removingNum = 0;

   int leftPart = num / (int)pow(10, position + 1);
   int rightPart = num % (int)pow(10, position);

   removingNum = leftPart * (int)pow(10, position) + rightPart;

   return removingNum;
}
int largestNumber(int num)
{
   int largestNum = 0;
   int tempNum, i;

   for (i = 0; i < 4; i++)
   {
      tempNum = removingDigit(num, i);

      if (tempNum > largestNum)
      {
         largestNum = tempNum;
      }
   }

   return largestNum;
}
int main()
{
   int num;
   printf("Enter a 4-digit number: ");
   scanf("%d", &num);
   int largestNum = largestNumber(num);
   printf("The largest number by removing a single digit: %d\n", largestNum);
   return 0;
}
