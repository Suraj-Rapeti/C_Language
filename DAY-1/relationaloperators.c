#include<stdio.h>
int main(){
    int a ;
    int b ;

    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("greater than: %d\n", a > b);
    printf("less than: %d\n", a < b);  
    printf("greater than or equal to: %d\n", a >= b);
    printf("less than or equal to: %d\n", a <= b);
}