// Write a C program to add two integers and display the result

#include<stdio.h>
int add();
void main(){
    int x;
    x = add();
    printf("Addition of Numbers is %d", x);
}
 int add(){
    int a , b;
    printf("Enter two numbers to add ");
    scanf("%d %d", &a, &b);
    int c = a + b;
    return c;
 }
