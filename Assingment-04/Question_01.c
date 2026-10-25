// Print armstrong numbers in the given range 1 to n.
#include<stdio.h>
void main(){
    int n = 500;
    int num, temp, rem , sum;
    for(int i = 1; i <= n; i++){
        num = i;
        temp = num;
        sum = 0;

        while(temp > 0) {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10 ;
        }
        if (sum == num){
            printf("%d ", num);
        }
    }
}
