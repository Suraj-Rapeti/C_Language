#include<stdio.h> 
int main(){ 
   double n,sum=0;
   do{
    printf("enter a number:");
    scanf("%lf",&n);
    sum+=n;
   }
    while(n!=0.0);
    printf("sum = %.2lf",sum);

    return 0;
}