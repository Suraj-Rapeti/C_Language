#include<stdio.h>
int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int sum = 0;
    for(int i = 1; i <= num; i++){
        sum += i;
    }

    printf("Sum of numbers is: %d\n", sum);
    return 0;
}