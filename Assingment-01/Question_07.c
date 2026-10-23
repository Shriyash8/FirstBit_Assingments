// Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
// 10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
// respectively.

#include<stdio.h>
void main(){
  int basic = 8000;
  int da, ta, hra;

  if(basic <= 5000){
    da = basic * 10/100;
    ta = basic * 20/100;
    hra = basic * 25/100;
  }
  else{
    da = basic * 15/100;
    ta = basic * 25/100;
    hra = basic * 30/100;
  }
  int total_salary = basic + da + ta + hra;

  printf("Basic Salary - %d\n", basic);
  printf("DA - %d\n", da);
  printf("TA - %d\n", ta);
  printf("HRA - %d\n", hra);
  printf("Total Salary - %d\n", total_salary);
}
