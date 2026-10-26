// Print a right-angled triangle pattern
// Input: n = 5
#include<stdio.h>
void main(){
    int number = 5;
    for(int i = 1; i <= number ; i++){
        for(int j = 1; j <= i ; j++){
            printf("* ");
        }
        printf("\n");
    }
}
