#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time calculateDifference(struct Time t1, struct Time t2) {
    struct Time diff;
    
    int t1Seconds = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int t2Seconds = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    
    int diffSeconds = (t1Seconds > t2Seconds) ? (t1Seconds - t2Seconds) : (t2Seconds - t1Seconds);
    
    diff.hours = diffSeconds / 3600;
    diffSeconds = diffSeconds % 3600;
    diff.minutes = diffSeconds / 60;
    diff.seconds = diffSeconds % 60;
    
    return diff;
}

int main() {
    struct Time time1, time2, difference;

    printf("Enter the first time period (hours minutes seconds): ");
    scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds);

    printf("Enter the second time period (hours minutes seconds): ");
    scanf("%d %d %d", &time2.hours, &time2.minutes, &time2.seconds);

    difference = calculateDifference(time1, time2);

    printf("\nDifference between the two time periods: %02d:%02d:%02d\n",
           difference.hours, difference.minutes, difference.seconds);

    return 0;
}

