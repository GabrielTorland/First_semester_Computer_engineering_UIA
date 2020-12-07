#include <stdio.h>
#include <string.h>
#include "student_t.h"

int main() {
    student_t test;
    memset(&test, 0, sizeof(test));

    printf("Student id\n");
    fgets(test.id, 100, stdin);
    test.id[strlen(test.id)-1] = 0;

    printf("Name\n");
    fgets(test.Name, 100, stdin);
    test.Name[strlen(test.Name)-1] = 0;

    printf("Age\n");
    fgets(test.age, 100, stdin);
    test.age[strlen(test.age)-1] = 0;

    print_all(test);

    return 0;
}
