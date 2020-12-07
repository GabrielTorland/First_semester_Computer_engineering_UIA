#include <stdio.h>
#include <string.h>
#define STRING_LENGTH 100
void string_upper(char input[]){
    printf("The string in uppercase is '");
    for(int i = 0; input[i] != 0; i++){
        if (input[i] <= 122 && input[i] >= 97){
            input[i] -= 32;
            printf("%c", input[i]);
        }
        else{
            printf("%c", input[i]);
            continue;
        }
    }
    printf("'\n");
}
void string_lower(char input[]){
    printf("The string in lowercase is '");
    for(int i = 0; input[i] != 0; i++){
        if (input[i] <= 90 && input[i] >= 65){
            input[i] += 32;
            printf("%c", input[i]);
        }
        else{
            printf("%c", input[i]);
            continue;
        }
    }
    printf("'\n");
}
void split(char input[], int count){
    //if(count %2 == 0){
        printf("The string split in two is '");
        for (int i = 0;input[i] != 0; i++){
            if(i == ((count/2)-1)){
                printf("%c", input[i]);
                printf(" - ");
                continue;
            }
            printf("%c", input[i]);
        }
        printf("'\n");
    //}
    //else printf("The string can only be even!\n");
}
int main()
{
    char user_input[STRING_LENGTH] = { 0 };

    fgets(user_input, STRING_LENGTH, stdin);
    user_input[strlen(user_input)-1] = 0;

    int count2 = (int)strlen(user_input);

    string_upper(user_input);
    string_lower(user_input);
    split(user_input, count2);

    return 0;
}