// Check the given number is Perfect number or not.
// Input: n = 28
// Output: Perfect
#include<stdio.h>
void main(){
    int number = 28;
    int sum = 0;

    for(int i = 1; i < number; i++){
        if(number % i == 0){
            sum = i + sum;
        }
    }
    if(sum == number){
        printf("Number is Perfect");
    }
    else{
        printf("Number is not Perfect");
    }
}
