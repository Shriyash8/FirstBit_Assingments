//Grade system using nested else if 
#include<stdio.h>
void main(){
    int marks = 47;
    if(marks >= 75 ){
        printf("Grade is A+");
    }
        else{
            if(marks >= 55 ){
                printf("Grade is B+");
            }
            else{
                if (marks >= 45){
                    printf("Grade is C+");
                }
                else{
                    if(marks >= 35){
                        printf("Grade is D+");
                        }
                        else{
                            printf("Student is Failed");
                        }
                    }
                }
            }
        }
    
