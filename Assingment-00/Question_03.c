// Write a C program to convert temperature from Celsius to Fahrenheit using the
// formula:
// F = (C *9/5) + 32

#include<stdio.h>
void main(){
  int celsius = 27;
  int farenheit = (celsius * 9/5) + 32;

  printf("Converted temprature from Celsius to Farenheit is %d", farenheit);
}
