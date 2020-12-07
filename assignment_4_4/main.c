#include <stdio.h>
#include <string.h>
#define STRING_LENGTH 100

int main() {

    char user_input[STRING_LENGTH] = { 0 };

    fgets(user_input, STRING_LENGTH, stdin);
    user_input[strlen(user_input)-1] = 0;

    int c, count[26] = { 0 }, x;

    for (int i = 0; user_input[i] != 0; i++){
        if (user_input[i] >= 'a' && user_input[i] <= 'z'){
            x = user_input[i] - 'a';
            count[x]++;
        }
    }
    char alfa = 'a';
    for (c = 0; c < 26; c++)
    {
        if(count[c] != 0)
            printf("'%c' : %i\n", alfa, count[c]);

        alfa++;
    }


    return 0;
}
