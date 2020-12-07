//
// Created by gabri on 12.10.2020.
//

#ifndef ASSIGNMENT_6_2_STUDENT_INFORMATION_H
#define ASSIGNMENT_6_2_STUDENT_INFORMATION_H
typedef struct{
    char name[100];
    int age;
    int count;
}student_t;
student_t* read_student();
#endif //ASSIGNMENT_6_2_STUDENT_INFORMATION_H

