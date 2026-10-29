// Check the given number is prime or not.
// Input: n = 7
// Output: Prime
//Prime number code with function
#include<stdio.h>
int isPrime(int);
void main(){
    int no = 13;

    int result = isPrime(no);
    if(result == 1){
        printf("Number is Prime");
    }
    else{
        printf("Number is not Prime");
    }
}
int isPrime(int no){
    int status = 0;
    if(no < 1){
        return 0;
    }
    for(int i = 2; i <= no/2; i++){
        if(no % i == 0){
            status++;
        }
        if(status == 0){
            return 1;
        }
        else{
            return 0;
        }
    }
}
