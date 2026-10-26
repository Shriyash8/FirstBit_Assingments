// Print an inverted right-angled triangle pattern
// Input: n = 5
#include<stdio.h>
void main(){
    int number = 5;
    for(int i = number; i >= 1 ; i--){
        for(int j = 1; j <= i ; j++){
            printf("* ");
        }
        printf("\n");
    }
}
