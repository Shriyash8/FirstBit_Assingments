// Print a pattern of stars in diamond shape
// Input: n = 4
#include<stdio.h>

void  main() {
    int n;

    printf("Enter the number of rows ");
    scanf("%d", &n);
    
//upper half of diamond  
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++){
            printf("  ");
        }
        for(int j =1; j <= 2 * i - 1; j++){
            printf("T ");
        }
        printf("\n");
    }
    //lower half
    for(int i= 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
        printf("  ");
        }
        for(int j = 1; j <= 2*(n-i)+1; j++){
            printf("T ");
        }
        printf("\n");
    }
}
