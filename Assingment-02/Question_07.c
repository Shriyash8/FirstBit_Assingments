// Accept the age and check if the person is:
// Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)
#include<stdio.h>
void main(){
    int age = 35;

    if(age < 12){
        printf("Person is a child");
    }
    else if (age >= 12 && age <= 19){
        printf("Person is a Teenager");
    }
    else if (age >= 20 && age <= 59){
        printf("Person is an Adult");
    }
    else if( age > 60){
        printf("Person is a Senior Citizen");
    }
}
