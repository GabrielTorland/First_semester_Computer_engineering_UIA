#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sort(int count2[], int count){
    int j;
    int temp;
    for (int i = 0; i < count; ++i) {
        for (j = i+1; j < count; ++j) {
            if(count2[i] > count2[j]){
                temp = count2[i];
                count2[i] = count2[j];
                count2[j] = temp;
            }
        }
    }
}
int main() {
    int count;
    printf("How many integers will you type:");
    scanf("%i", &count);
    getchar();
    printf("\n");
    if(count == 0){
        printf("No numbers were given\n");
        return 0;
    }
    else if(count < 0){
        printf("Error!");
    }
    else {
        int* count2 =malloc(count * sizeof(int));
        memset(count2, 0, count*sizeof(int));
        printf("Type integrals:\n");
        for (int i = 0; i < count; ++i) {
            scanf("%i", &count2[i]);
            getchar();
        }
        printf("Count: %i\n", count);
        printf("Numbers:");
        for (int i = 0; i < count; ++i) {
            printf(" %i", count2[i]);
        }
        printf("\n");
        sort(count2, count);
        printf("Sorted:");
        for (int i = 0; i < count; ++i) {
            printf(" %i", count2[i]);
        }
        free(count2);
    }

    return 0;
}
