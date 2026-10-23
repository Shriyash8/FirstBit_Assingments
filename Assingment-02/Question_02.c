// Accept three sides of a triangle from the user and determine whether the triangle is
// equilateral, isosceles, or scalene.

#include<stdio.h>
void main(){
    int side1 = 30;
    int side2 = 40;
    int side3 = 50;

    if(side1 == side2 && side2 == side3 && side1 == side3){
        printf("Triangle is equilateral Triangle");
    }
    else if(side1 == side2 || side1 == side3 || side2 == side3){
        printf("Triangel is isosceles Triangel");
    }
    else if(side1 != side2 && side2 != side3 && side1 != side3){
        printf("Triangle is scalen Triangle");
    }
}
