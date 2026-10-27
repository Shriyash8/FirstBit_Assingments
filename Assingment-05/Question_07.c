// Print a Floyd’s triangle pattern
#include<stdio.h>

void  main() {
    int n;
    int num = 1;
    printf("Enter the number of rows ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}
