// Write a program to check whether a number is even or odd.
#include<stdio.h>
int evenOdd();
void main(){
    int x = evenOdd();
    if(x == 1){
        printf("Number is Even");
    }
    else{
        printf("Number is Odd");
    }
}
int evenOdd(){
    int num;
    printf("Enter any number ");
    scanf("%d", &num);

    if(num%2 == 0){
        return 1;
        }
        else {
            return 0;
        }    
}
