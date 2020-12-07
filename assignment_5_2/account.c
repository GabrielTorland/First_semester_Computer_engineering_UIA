//
// Created by gabri on 22.09.2020.
//
#include "account.h"
#include <stdio.h>
#include <string.h>
void type1(student_t test){
    FILE* file =fopen("student_read.txt", "r");
    if(file == NULL){
        printf("no such file.");
        fclose(file);
    }

    printf("Student id: ");
    while(!feof(file)){
        fscanf(file, "%c", &test.value);
        printf("%c", test.value);
        if(test.value == '\n'){
            printf("Name: ");
            while(!feof(file)){
                fscanf(file, "%c", &test.value);
                printf("%c", test.value);
                if(test.value == '\n'){
                    printf("Age: ");
                    while(!feof(file)){
                        fscanf(file, "%c", &test.value);
                        printf("%c", test.value);
                    }
                   break;
                }
            }
        }
    }
    fclose(file);
}
void type2(student_t test){
    printf("Student id\n");
    fgets(test.id, 100, stdin);
    test.id[strlen(test.id)-1] = 0;

    printf("Name\n");
    fgets(test.Name, 100, stdin);
    test.Name[strlen(test.Name)-1] = 0;

    printf("Age\n");
    fgets(test.age, 100, stdin);
    test.age[strlen(test.age)-1] = 0;

    FILE* file2 = fopen("student_write.txt", "w");
    fprintf(file2, "%s\n", test.id);
    fprintf(file2, "%s\n", test.Name);
    fprintf(file2, "%s\n", test.age);
    fclose(file2);
}
