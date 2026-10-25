// Print a solid square pattern
// Input: n = 4
// Output:
#include<stdio.h>
void main(){
    int number = 4;
    for(int i = 1; i <= number ; i++){
        for(int j = 1; j <= number ; j++){
            printf("* ");
        }
        printf("\n");
    }
}
