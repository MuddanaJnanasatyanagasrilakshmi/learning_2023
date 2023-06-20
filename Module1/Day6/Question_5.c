#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

void swapFields(struct Person* person1, struct Person* person2) {
    struct Person temp = *person1;
    *person1 = *person2;
    *person2 = temp;
}

int main() {
    struct Person person1, person2;

    printf("Enter details for person 1:\n");
    printf("Name: ");
    fgets(person1.name, sizeof(person1.name), stdin);
    printf("Age: ");
    scanf("%d", &person1.age);
    getchar(); // Clear the newline character from the input buffer

    printf("\nEnter details for person 2:\n");
    printf("Name: ");
    fgets(person2.name, sizeof(person2.name), stdin);
    printf("Age: ");
    scanf("%d", &person2.age);
    getchar(); // Clear the newline character from the input buffer

    printf("\nBefore swapping:\n");
    printf("Person 1: Name = %sAge = %d\n", person1.name, person1.age);
    printf("Person 2: Name = %sAge = %d\n", person2.name, person2.age);

    swapFields(&person1, &person2);

    printf("\nAfter swapping:\n");
    printf("Person 1: Name = %sAge = %d\n", person1.name, person1.age);
    printf("Person 2: Name = %sAge = %d\n", person2.name, person2.age);

    return 0;
}

