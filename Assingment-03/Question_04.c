// Check the given number is prime or not.
// Input: n = 7
// Output: Prime
#include<stdio.h>
void main(){
    int number = 7;
    int count = 0;

    for(int i = 1; i <= number; i++){
        if(number % i == 0){
            count++;
        }
    }
    if(count == 2){
        printf("Number is Prime");
    }
    else{
        printf("Number is not Prime");
    }
}
