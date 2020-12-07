#include <iostream>

int main() {
    float sum;
    float count=0;
    float average;
    float input;

    while(1==1){
        scanf("%g", &input);
        sum += input;
        if(input==0){
            average=sum/count;
            printf("Count: %g\n", count);
            printf("Sum: %g\n", sum);
            printf("Average: %g\n", average);
            break;
        }

            count++;
            }
    return 0;
}