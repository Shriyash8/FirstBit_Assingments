// Check the given number is Strong number or not.
// Input: n = 145
// Output: Strong
#include<stdio.h>
void main(){
    int number = 145;
    int temp = number;
    int rem, sum = 0;

    while(temp > 0){
        rem = temp % 10;

        int fact = 1;
       
        for(int i = 1; i <= rem; i++){
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }
    if (sum == number){
        printf("Number is Strong");
    }
    else{
        printf("Number is not storng");
    }
}
