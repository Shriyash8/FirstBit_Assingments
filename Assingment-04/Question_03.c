// Print perfect numbers in the given range 1 to n.
// Print perfect numbers in the given range 1 to n.
#include<stdio.h>
void main(){
    int n = 100;
    for(int i = 1; i <= n; i++){
        int sum = 0;
        for(int j = 1; j < i; j++){
            if(i % j == 0){
                sum = j + sum;
            }
        }
        if(sum == i){
        printf("%d " , i);
        }
    }
}
