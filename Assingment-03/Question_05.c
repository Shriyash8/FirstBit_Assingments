// Check the given number is Armstrong number or not..
// Input: n = 153
// Output: Armstrong
//Armstrong code with functions
#include<stdio.h>
int getCount(int);
int getPower(int, int);
int isArmstrong(int);
void main(){
    int num = 153;

    int res = isArmstrong(num);
    if(res == 1){
        printf("Number is Armstrong");
    }
    else{
        printf("Number is not Armstrong");
    }
          
}
//main ends here

//get count
int getCount(int num){
    int count =0;
    while(num > 0){
        count++;
        num = num/10;
    }
    return count;
}
//get power
int getPower(int base, int exp){
    int res = 1;
        for(int i = 1; i <= exp; i++){
            res = res * base;
        }
        return res;
}

// Armstrong function
int isArmstrong(int num){
int temp = num;
    
    int count = getCount(num);
  

    int rem, sum = 0;
    while(num > 0){
        rem = num%10;

        sum = sum + getPower(rem, count);
        num = num/10;
    }
    
    if(temp == sum){
        return 1;
    }
    else{
        return 0;
    }
}
