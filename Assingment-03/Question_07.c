// Find factorial of given number.
// Input: n = 5
// Output: 120
#include<stdio.h>
void main(){
    int number = 5;
    int factorial = 1;

    for(int i = number; i > 0; i--){
         factorial = i * factorial;
    }
    printf("%d", factorial);
}
