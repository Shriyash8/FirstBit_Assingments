// Write a C program to swap two numbers using a temporary third variable.
#include<stdio.h>
void main(){
  int num1 = 30;
  int num2 = 60;

  int temp = num1;
  num1 = num2;
  num2 = temp;

  printf("First number is %d\n", num1);
  printf("Second number is %d\n", num2);
}
