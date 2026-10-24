// Find Sum of first and last digit of given number.
// Input: n = 12345
// Output: 6 (1 + 5)
#include<stdio.h>
void main(){
    int number = 12345;
    int temp = number; 
    int first, last, sum;

    last = temp % 10;

    while (temp > 10){
        temp = temp / 10;
    }
    first = temp;
    sum = first + last;
    printf("%d", sum);
}
