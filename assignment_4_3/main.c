#include <stdio.h>
#include <string.h>
#define STRING_LENGTH 100
void equal_or_not(char const input[], char const input2[], int count){
    int temp = 0;
    for (int i = 0; input[i] != 0; i++){
        if (input[i] == input2[i]){
            temp++;
        }
    }
    if (count == temp){
        printf("The strings are equal\n");
    }
    else printf("The strings are not equal\n");
}
void sub_string(char input[], char input2[]){
    if (strstr(input, input2) != 0)
        printf("It is a substring!\n");
    if (strstr(input2, input) != 0 && strstr(input, input2) == 0)
        printf("It is a substring!\n");
    if (strstr(input2, input) == 0 && strstr(input, input2) == 0)
        printf("It is not a substring!");
}

int main()
{
    char user_input[STRING_LENGTH] = { 0 };
    char user_input2[STRING_LENGTH] = { 0 };

    fgets(user_input2, STRING_LENGTH, stdin);
    user_input2[strlen(user_input2)-1] = 0;

    fgets(user_input, STRING_LENGTH, stdin);
    user_input[strlen(user_input)-1] = 0;

    int count2 = (int)strlen(user_input);

    equal_or_not(user_input, user_input2, count2);
    sub_string(user_input, user_input2);

    return 0;
}
