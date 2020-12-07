#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Student_information.h"

void youngest_oldest(student_t* student1){
    int temp2 = student1[0].age;
    int temp3 = student1[0].age;
    int temp4 = 0, temp5 = 0;

        for (int k = 1; k < student1->count; ++k) {
            if(temp2 < student1[k].age){
                temp4 = k;
                temp2 = student1[k].age;
            }
            else if(temp3 > student1[k].age){
                temp5 = k;
                temp3 = student1[k].age;
            }
    }
    printf("Oldest: %s\n", student1[temp4].name);
    printf("Youngest: %s\n", student1[temp5].name);
}
int main() {
    student_t* student1 = read_student();
    int i = 0;
    printf("Count: %i\n", student1->count);
    while(1){
        if(strcmp(student1[0].name, "stop") == 0){
            printf("No students were given\n");
            break;
        }
        else if(strcmp(student1[i].name, "stop") == 0){
            break;
        }
        else {
            printf("Name = %s",student1[i].name);
            printf(", Age = %i\n",student1[i].age);
        }
        i++;
    }
    if (strcmp(student1[0].name, "stop") != 0){
        youngest_oldest(student1);
    }
    free(student1);

    return 0;
}
