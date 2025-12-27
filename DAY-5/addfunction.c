#include<stdio.h>
int add(int,int); //function prototype
int sub(int,int);
int main(){
    int a,b;
    printf("Enter the values ");
    scanf("%d %d",&a,&b);

    int sum = add(a,b);
    int subs = sub(a,b);

    printf("Sum of values: %d",sum);
    printf("\nSubtraction of values: %d",subs);
    return 0;
}

int add(int a, int b){  //function definition
    int c=a+b;
    return c;
}

int sub(int a, int b){
    int c=a-b;
    return c;
}