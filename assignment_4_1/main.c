#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define STRING_LENGTH 100

void string_reverse(char string[],int count){
    printf("The word reversed is '");
    for(int i = 0;string[i] > 0;i++){
        printf("%c", string[count]);
        count--;
    }
    printf("'\n");
}
bool is_palindrome(const char user_input[], int count){
    int temp = 0;
    for ( int i = 0; user_input[i] > 0; i++){
    if (user_input[i] != user_input[count-i]){
        continue;
    }
    else temp++;
    }
    if(temp == count+1)
        return true;
    else return false;
}

//void string_upper(char input[]){
    //printf("The string in uppercase is '");
    //for(int i = 0; input[i] != 0; i++){
        //if (input[i] <= 122 && input[i] >= 97){
            //input[i] -= 32;
            //printf("%c", input[i]);
        //}
        //else{
            //printf("%c", input[i]);
            //continue;
        //}
    //}
    //printf("'\n");
//}
//void string_lower(char input[]){
    //printf("The string in lowercase is '");
    //for(int i = 0; input[i] != 0; i++){
        //if (input[i] <= 90 && input[i] >= 65){
            //input[i] += 32;
            //printf("%c", input[i]);
        //}
        //else{
            //printf("%c", input[i]);
            //continue;
            //}
    //}
    //printf("'\n");
//}
//void split(char input[], int count){
    //if(count %2 == 0){
        //printf("The spring split in two is '");
        //for (int i = 0;input[i] != 0; i++){
            //if(i == ((count/2)-1)){
                //printf("%c", input[i]);
                //printf(" - ");
                //continue;
            //}
            //printf("%c", input[i]);
        //}
        //printf("'\n");
    //}
    //else printf("The string can only be even!\n");
//}
//void equal_or_not(char const input[], char const input2[], int count){
    //int temp = 0;
    //for (int i = 0; input[i] != 0; i++){
        //if (input[i] == input2[i]){
            //temp++;
        //}
    //}
    //if (count == temp){
        //printf("The strings are equal\n");
    //}
    //else printf("The strings are not equal\n");
//}
//void sub_string(char input[], char input2[]){
    //if (strstr(input, input2) != 0)
        //printf("It is a substring!\n");
    //if (strstr(input2, input) != 0)
        //printf("It is a substring!\n");
    //if (strstr(input2, input) == 0 && strstr(input, input2) == 0)
       // printf("it is not a substring!");
//}

int main()
{
    char user_input[STRING_LENGTH] = { 0 };


    fgets(user_input, STRING_LENGTH, stdin);
    user_input[strlen(user_input)-1] = 0;

    int count = (int)strlen(user_input)-1;
    //int count2 = (int)strlen(user_input);
    int is_palindrome2 = is_palindrome(user_input, count);

    printf("The word contains %i letters\n", (int)strlen(user_input));

    if (is_palindrome2 == true){
        printf("The word is a palindrome\n");
    }
    else printf("The word is not a palindrome\n");

    string_reverse(user_input,count);
    //string_upper(user_input);
    //string_lower(user_input);
    //split(user_input, count2);

    //char user_input2[STRING_LENGTH] = { 0 };
    //fgets(user_input2, STRING_LENGTH, stdin);
    //user_input2[strlen(user_input2)-1] = 0;

    //equal_or_not(user_input, user_input2, count2);
    //sub_string(user_input, user_input2);

    return 0;
}

