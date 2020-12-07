#include <stdio.h>
#define NUMBER_SIZE 10
//This is a function for the sum of the inputs.
int total(const int numbers[], int count){
    int temp = 0;
    for(int i = 0; i<count; i++)
        temp += numbers[i];
    return temp;
}
float average(int sum, int count){
    float temp;
    temp = sum/(count*1.0);
    return temp;
}
//This is a function that will set the numbers in ascending order.
int set_numbers_ascending(int numbers[],int count){
    int temp;
    int k;
    for (int j = 0 ; j < count; ++j){
        for(k = j + 1; k < count; ++k){
            if (numbers[j] > numbers [k]){
                temp = numbers[j];
                numbers[j] = numbers[k];
                numbers[k] = temp;
            }
        }
    }
printf("\nSorted:");
    for(int i = 0; i<NUMBER_SIZE; i++)
        printf(" %i", numbers[i]);
}
float median(int const numbers[], int count){
    float median;
    if(count %2 == 0){
        median = (((numbers[ count/2 ]) + (numbers[(count/2)-1]))/2.0);
        return median;
    }
    else{
        median = numbers[(count+1)/2];
        return median;
    }

}
int main() {
    //Here the program will read in 10 integrals.
    int numbers[NUMBER_SIZE];
    for(int i = 0; i<NUMBER_SIZE; i++){
        scanf("%i", &numbers[i]);
    }
    //Here will the program find the lowest value number in the row.
    int always_smaller=numbers[0];
    for(int i=0;i<NUMBER_SIZE; i++){
        if(numbers[i] > always_smaller){
            always_smaller = numbers[i];
        }
    }
    //Here will the program find the highest value number.
    int big=numbers[0];
    for(int i = 0; i<NUMBER_SIZE; i++){
        if(numbers[i] < big ){
            big = numbers[i];
        }

    }
    int ascending = set_numbers_ascending(numbers, sizeof(numbers)/(sizeof(numbers[0])));
    int count = sizeof(numbers)/sizeof(numbers[0]);
    int Sum = total(numbers, sizeof(numbers)/sizeof(numbers[0]));
    float middel = median(numbers, count);
    float ave = average(Sum, count);


    printf("\nMinimum: %i\n", big);
    printf("Maximum: %i\n", always_smaller);
    printf("Sum: %i\n", Sum);
    printf("Average: %g\n", ave);
    printf("Median: %g\n", middel);




    return 0;
}
