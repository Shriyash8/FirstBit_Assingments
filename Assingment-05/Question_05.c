//Inverted Pyramid
#include<stdio.h>

void  main() {
    int n;
    printf("Enter the number of rows ");
    scanf("%d", &n);

    for(int i =1; i<=n; i++){
        for(int j = 1; j <= i; j++){
            printf("  ");
        }

        for(int j = 1; j <= 2*(n-i)+1; j++){
            printf("T ");
        }
        printf("\n");
    }
}
