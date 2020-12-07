#include <stdio.h>
#include <string.h>
#include "account.h"

int main() {
    student_t test;
    memset(&test, 0, sizeof(test));

    printf("1.Read student information from file\n");
    printf("2.Write student information to file\n");
    printf("3.Exit\n");

    while(1){
        fgets(test.input, 100, stdin);
        test.input[strlen(test.input)-1] = 0;

        if  (test.input[0] == '1')
            type1(test);

        if (test.input[0] == '2'){
            type2(test);
        }

        if(test.input[0] == '3'){
            break;
        }
    }

    return 0;
}
