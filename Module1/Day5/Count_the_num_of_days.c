#include <stdio.h>
int Leap_year(int year)
{
    if((year%4==0) && ((year%400==0) || (year%100!=0)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main() 
{
    int Day, Month,Year;
    int Days_in_Month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int TotalDays = 0;
    printf("Enter the date (DD MM YYYY): ");
    scanf("%d %d %d", &Day, &Month, &Year);
    if (Year < 0 || Month < 1 || Month > 12 || Day < 1 || Day > Days_in_Month[Month-1] )
    {
        printf("Invalid date!\nplease enter the valide date.");
        return 0;
    }
    for (int i = 0; i < Month-1; i++) 
    {
        TotalDays += Days_in_Month[i];
    }
    if (Leap_year(Year) && Month > 2) 
    {
        TotalDays += 1;
    }
    TotalDays += Day;
    printf("Total number of days up to %02d/%02d/%04d are : %d\n", Day, Month, Year, TotalDays);
    
    return 0;
}
