//File Handling

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define BUFFER_SIZE 4096

void convert_upper(char* buf) {
    for (int i = 0; buf[i] != '\0'; i++) {
        buf[i] = toupper(buf[i]);
    }
}

void convert_Lower(char* buf) {
    for (int i = 0; buf[i] != '\0'; i++) {
        buf[i] = tolower(buf[i]);
    }
}

void convert_SentenceCase(char* buf) {
    int capitalize = 1;  
    for (int i = 0; buf[i] != '\0'; i++) {
        if (isspace(buf[i])) {
            capitalize = 1;
        } else if (capitalize) {
            buf[i] = toupper(buf[i]);
            capitalize = 0;
        } else {
            buf[i] = tolower(buf[i]);
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments.\n");
        printf("Usage: ./cp <option> <source_file> <target_file>\n");
        return 1;
    }

    char* option = argv[1];
    char* sourcePath = argv[2];
    char* targetPath = argv[3];

    FILE* sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        return 1;
    }

    FILE* targetFile = fopen(targetPath, "w");
    if (targetFile == NULL) {
        printf("Unable to create the target file.\n");
        fclose(sourceFile);
        return 1;
    }

    char buf[BUFFER_SIZE];
    size_t bytesRead;

    while ((bytesRead = fread(buf, 1, BUFFER_SIZE, sourceFile)) > 0) {
        if (strcmp(option, "-u") == 0) 
        {
            convert_upper(buf);
        }
        else if (strcmp(option, "-l") == 0) 
        {
            convert_Lower(buf);
        } 
        else if (strcmp(option, "-s") == 0) 
        {
            convert_SentenceCase(buf);
        }

        fwrite(buf, 1, bytesRead, targetFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(targetFile);

    return 0;
}
