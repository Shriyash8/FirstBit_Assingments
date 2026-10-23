// Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
// desired operations.
#include<stdio.h>
void main(){
    int num1 = 20;
    int num2 = 4;
    char ch = '/';

    if(ch == '+'){
    printf("Addition is %d", num1 + num2);
    }
    else if(ch == '-'){
        printf("Subtraction is %d", num1 - num2);
    }
    else if(ch == '*'){
        printf("Multiplication is %d", num1 * num2);
    }
    else if(ch == '/'){
        printf("Division is %d", num1 / num2 );
    }
}
