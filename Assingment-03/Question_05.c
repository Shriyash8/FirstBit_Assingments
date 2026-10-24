// Check the given number is Armstrong number or not..
// Input: n = 153
// Output: Armstrong
#include<stdio.h>
void main(){
    int number = 153;
    int temp = number;
    int rem, sum = 0;

    while(temp > 0){
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }
    if(sum == number){
        printf("Number is Armstrong");
    }
    else{
        printf("Number is not Armstrong");
    } 
}
