// Write a program to find greatest of three numbers using nested if-else.
#include<stdio.h>
void main(){
    int num1 = 50;
    int num2 = 60;
    int num3 = 40;

    if(num1 > num2){
        if(num1 > num3){
            printf("Greatest number is %d", num1);
        }
        else{
            printf("Greatest number is %d", num3);
        }
    }
    else if(num2 > num3){
        printf("Greatest number is %d", num2);
    }
    else{
        printf("Greatest number is %d", num3);
    }
}
