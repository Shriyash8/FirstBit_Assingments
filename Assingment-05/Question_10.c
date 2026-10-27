// Print a hollow square with diagonal pattern
#include<stdio.h>
void main(){
    int n;
    printf("Enter the Number ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if(i == 1 || j == 1 || i == n || j == n || j == i){
            printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
