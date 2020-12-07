//
// Created by gabri on 12.10.2020.
//
#include "stdlib.h"
#include <stdio.h>
#include <string.h>
#include "Student_information.h"
#define SIZE_T 5
student_t* read_student(){
    student_t* student = (student_t*)malloc(SIZE_T*sizeof(student_t));
    memset(student, 0, sizeof(student_t));
    //counts the how many times the while loops goes.
    int i = 0;
    //Value used to reallocate memory.
    int temp = 1;
    while (1){

        if(i == SIZE_T*temp) {
            temp++;
            student = realloc(student, temp * SIZE_T * sizeof(student_t));
        }

        printf("Student name: \n");
        fgets(student[i].name, 100, stdin);
        student[i].name[strlen(student[i].name)-1] = 0;
        if(strcmp(student[i].name,"stop") == 0)
            break;
        printf("Student age: \n");
        scanf("%i", &student[i].age);
        getchar();
        i++;
    }
    student->count = i;
    return student;
}
