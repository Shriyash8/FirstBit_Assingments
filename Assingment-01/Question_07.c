// Write a C program to convert given minutes into hours and remaining minutes.
#include<stdio.h>
void main(){
  int number = 150;
  int hours = number / 60;
  int minutes = number % 60;

  printf("%d Hours ", hours);
  printf("%d Minutes", minutes);
}
