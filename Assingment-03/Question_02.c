// Print table for given number.
// Input: n = 5
// Output: 5 10 15 20 25 30 35 40 45 50
#include<stdio.h>
void main(){
    int number = 5;
    for(int i = 1; i <= 10; i++){
        int res = i * number;
        printf("%d ", res);
    }
}
