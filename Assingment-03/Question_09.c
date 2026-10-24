// Check the given number is Palindrome number or not.
// Input: n = 121
// Output: Palindrome
#include<stdio.h>
void main(){
    int number = 121;
    int temp = number;
    int rem, reverse = 0;

    while(temp > 0){
        rem = temp % 10;
        reverse = (reverse * 10) + rem;
        temp = temp / 10;
    }
    if(reverse == number ){
        printf("Number is Palindrome");
    }
    else{
        printf("Number is not Palindrome");
    }
}
