//File Handling 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100
#define MAX_LINE_LENGTH 100

typedef struct {
    int entryNumber;
    char sensorNumber[10];
    float temperatureValue;
    int humidityValue;
    int lightValue;
    char timestamp[10];
} LogEntry;

void displayLogEntries(const LogEntry* logEntries, int count) {
    printf("EntryNumber\tSensorNumber\tTemperature\tHumidity\tLight\tTimestamp\n");
    printf("--------------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%d\t\t%s\t\t%.1f\t\t%d\t\t%d\t%s\n",
               logEntries[i].entryNumber,
               logEntries[i].sensorNumber,
               logEntries[i].temperatureValue,
               logEntries[i].humidityValue,
               logEntries[i].lightValue,
               logEntries[i].timestamp);
    }
}

int main() {
    LogEntry logEntries[MAX_ENTRIES];
    int count = 0;

    FILE* file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    char line[MAX_LINE_LENGTH];

    // Skip the header line
    fgets(line, sizeof(line), file);

    while (count < MAX_ENTRIES && fgets(line, sizeof(line), file) != NULL) {
        sscanf(line, "%d,%[^,],%f,%d,%d,%[^,\n]",
               &logEntries[count].entryNumber,
               logEntries[count].sensorNumber,
               &logEntries[count].temperatureValue,
               &logEntries[count].humidityValue,
               &logEntries[count].lightValue,
               logEntries[count].timestamp);

        count++;
    }

    fclose(file);

    displayLogEntries(logEntries, count);

    return 0;
}
