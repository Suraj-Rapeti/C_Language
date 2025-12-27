#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);

int main(){
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);

    printf("Addition: %d\n", add(a,b));
    printf("Subtraction: %d\n", sub(a,b));
    printf("Multiplication: %d\n", mul(a,b));
    printf("Division: %d\n", div(a,b));

    return 0;
}

int add(int a, int b){
    return a + b;
}
int sub(int a, int b){
    return a - b;
}
int mul(int a, int b){
    return a * b;
}
int div(int a, int b){
    if(b != 0)
        return a / b;
    else {
        printf("Error: Division by zero\n");
        return 0;
    }
}